/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:37:58 by marisous          #+#    #+#             */
/*   Updated: 2026/08/04 15:38:00 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nb, char *base);
int		ft_get_base_number(int nb, char *base, int base_n);
int		ft_get_power_max(int *nb, int base_n, int *limit);
void	ft_get_string(int nb, int *params, char *base, char *snumber);
void	ft_add_one(char *snumber, char *base, char *max_base);

void	ft_add_one(char *snumber, char *base, char *max_base)
{
	char	*lsd;
	int		add_one;

	lsd = snumber;
	while (*(lsd + 1) != '\0')
		lsd++;
	add_one = 1;
	while (add_one)
	{
		if (*lsd == *max_base)
			*lsd = base[0];
		else
		{
			add_one = 0;
			while (*lsd != base[add_one])
			{
				add_one++;
			}
			*lsd = base[add_one +1];
			break ;
		}
		lsd--;
	}
}

void	ft_get_string(int nb, int *params, char *base, char *snumber)
{
	int		digit;

	snumber[0] = base[0];
	digit = 1;
	while (params[2] > 0)
	{
		snumber[digit] = base[nb / params[2]];
		nb = nb % params[2];
		params[2] /= params[0];
		digit++;
		snumber[digit] = '\0';
	}
}

int	ft_get_power_max(int *nb, int base_n, int *limit)
{
	long	pow_n;

	*limit = 0;
	if (*nb == -2147483648)
	{
		*limit = 2;
		(*nb)++;
	}
	if (*nb == 0)
		*limit = 1;
	if (*nb < 0)
	{
		write(1, "-", 1);
		(*nb) = - (*nb);
	}
	pow_n = 1;
	while (pow_n < (long) *nb)
	{
		if ((int) pow_n != pow_n)
			break ;
		pow_n *= base_n;
	}
	if ((int) pow_n != pow_n)
		pow_n /= base_n;
	return ((int) pow_n);
}

int	ft_get_base_number(int nb, char *base, int base_n)
{
	char	*pt_n;

	if (!base || *base == '\0')
		return (0);
	while (*(base + 1) != '\0')
	{
		pt_n = base + 1;
		while (*pt_n != '\0')
		{
			if (*base == *pt_n || *base == 43 || *base == 45 || *pt_n == 43
				|| *pt_n == 45 || *base < 33 || *pt_n < 33)
				return (0);
			pt_n++;
		}
		base++;
		base_n++;
	}
	if (base_n < 2)
		return (0);
	if (nb == 0)
	{
		write(1, (base - base_n + 1), 1);
		return (0);
	}
	return (base_n);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		params [4];
	char	mystring[34];
	char	*snumber;

	snumber = mystring;
	params[0] = ft_get_base_number(nb, base, 1);
	if (!params[0])
		return ;
	params[2] = ft_get_power_max(&nb, params[0], &params[1]);
	if (params[1] == 1)
	{
		write(1, base, 1);
		return ;
	}
	ft_get_string(nb, params, base, snumber);
	if (params[1] == 2)
		ft_add_one(snumber, base, (base + params[0] -1));
	while (*snumber == base[0])
		snumber++;
	while (*snumber != '\0')
	{
		write(1, snumber, 1);
		snumber++;
	}
}

/* /\* Uncomment the following section in order to test the code *\/ */
/* int	main(void) */
/* { */
/* 	ft_putnbr_base(-2147483648, "01"); */
/* 	printf("<---- \n"); */

/* 	return(0); */

/* 	ft_putnbr_base(-42, "01 2"); */
/* 	/\* ft_putnbr_base(-2147483648, "01234567"); *\/ */
/* 	ft_putnbr_base(00, "01"); */
/* 	printf(" <---- \n"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(11, "0123456789A"); */
/* 	printf(" <---- \n"); */
/* 	ft_putnbr_base(-2147483648, "0123456789"); */
/* 	printf("<---- \n"); */
/* 	ft_putnbr_base(0, "0123456789A"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(300, "0123456789"); */
/* 	printf("\n"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(-4452500, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(520, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(214748364, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(-4434525, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(445634525, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(-445634525, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(121, "0123456789A"); */
/* 	printf("\n"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(-2147483648, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(-2147483647, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(2147483647, "0123456789"); */
/* 	printf("\n"); */
/* 	ft_putnbr_base(2147483640, "0123456789"); */
/* 	printf("\n"); */
/* 	return (0); */
/* } */
