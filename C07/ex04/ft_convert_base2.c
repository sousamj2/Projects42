/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:58:17 by marisous          #+#    #+#             */
/*   Updated: 2026/08/10 13:58:26 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_get_base_number(char *base);
char	*ft_signcheck(char *str, int *signal);
void	ft_get_string(long nb, int *params, char *base, char *snumber);
void	ft_get_power_max(long *nb, int *params);
int		ft_digit(char *c, char *base);

/**
   Check if the base is valid.
   Compares 'digits' with +, -, spaces and checks for duplicates.
   Returns the size of the base or 0 if the base is not valid.
 */
int	ft_get_base_number(char *base)
{
	char	*pt_n;
	int		base_n;

	if (!base || *base == '\0')
		return (0);
	base_n = 1;
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
	return (base_n);
}

/**
   Check the signal multiplication of the string.
   An odd number of '-' signs sets the signal to -1.
   Returns the pointer of the string after all signs.
 */
char	*ft_signcheck(char *str, int *signal)
{
	*signal = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			(*signal) *= -1;
		str++;
	}
	return (str);
}

/**
   Receives the number (nb) to convert to the base and saves it
   to the snumber string. The two params in use are the maximum
   power of the base and its lenght.
 */
void	ft_get_string(long nb, int *params, char *base, char *snumber)
{
	int		digit;
	//printf("Params 0: %d, 1: %d, 2: %d\n", params[0], params[1], params[2]);
	digit = 0;
	if (params[1])
	{
		*snumber = '-';
		*(snumber+1) = '\0';
		digit++;
	}
	//printf("sign snumber [%s] and number is now [%ld]\n",snumber,nb);
	while (params[2] > 0)
	{
		//printf("digit [%d] power [%d] nb [%ld] index [%ld] \n", digit, params[2], nb, nb / params[2]);
		//printf("bef snumber [%s]\n",snumber);
		snumber[digit] = base[nb / params[2]];
		nb = nb % params[2];
		params[2] /= params[0];
		digit++;
		snumber[digit] = '\0';
		//printf("aft snumber [%s]\n",snumber);
	}
}

/**
   Determines what is the maximum power of base_n that the number nb has.
   It inverts the number if negative and saves the signal.
   The function returns the power that is calculated.
 */
void	ft_get_power_max(long *nb, int *params)
{
	long	pow_n;

	params[1] = 0;
	params[3] = 2;
	if (*nb < 0)
	{
		params[1] = 1 ;
		(*nb) = - (*nb);
	}
	params[3] += params[1];
	pow_n = 1;
	while (pow_n < (long) *nb)
	{
		if ((int) pow_n != pow_n)
			break ;
		pow_n *= params[0];
		params[3]++;
	}
	if (*nb != pow_n)
		pow_n /= params[0];
	params[2] = (int) pow_n;
}

/**
   Checks the positions of the caracter c in the base.
 */
int	ft_digit(char *c, char *base)
{
	int	retval;
	int	iter;

	retval = -1;
	iter = 0;
	while (*base != '\0')
	{
		if (*c == *base)
		{
			retval = iter;
			break ;
		}
		base++;
		iter++;
	}
	return (retval);
}
