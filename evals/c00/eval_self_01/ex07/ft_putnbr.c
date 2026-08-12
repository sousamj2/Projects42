/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 11:29:02 by marisous          #+#    #+#             */
/*   Updated: 2026/07/25 11:29:05 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_is_negative(int nb);

int	ft_is_negative(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		return (-nb);
	}
	else
		return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	pow10;

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	pow10 = 1000000000;
	nb = ft_is_negative(nb);
	while (nb / pow10 == 0)
		pow10 /= 10;
	while (pow10 > 0)
	{
		ft_putchar('0' + nb / (pow10));
		nb = nb % pow10;
		pow10 /= 10;
	}
}

/* /\* Uncomment the following section in order to test the code *\/ */
/* int	main(void) */
/* { */
/* 	ft_putnbr(300); */
/* 	ft_putchar('\n'); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(-4452500); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(520); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(-4434525); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(445634525); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(-445634525); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(0); */
/* 	ft_putchar('\n'); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(-2147483648); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(-2147483647); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(2147483647); */
/* 	ft_putchar('\n'); */
/* 	ft_putnbr(2147483646); */
/* 	ft_putchar('\n'); */
/* 	return (0); */
/* } */
