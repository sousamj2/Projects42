/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:37:46 by marisous          #+#    #+#             */
/*   Updated: 2026/08/04 15:37:47 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(char *str);
char	*ft_signcheck(char *str, int *signal);
int		ft_get_power_base(int digits, int base);
int		ft_isspace(char *c);

int	ft_isspace(char *c)
{
	return (*c == ' ' || *c == '\f' || *c == '\n'
		|| *c == '\r' || *c == '\t' || *c == '\v');
}

int	ft_get_power_base(int digits, int base)
{
	int	index;
	int	power;

	power = 1;
	index = 0;
	while (index < digits - 1)
	{
		power *= base;
		index++;
	}
	return (power);
}

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

int	ft_atoi(char *str)
{
	int	signal;
	int	digits;
	int	value;
	int	power;

	digits = 0;
	value = 0;
	while (ft_isspace(str))
		str++;
	str = ft_signcheck(str, &signal);
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		digits++;
		str++;
	}
	power = ft_get_power_base(digits, 10);
	str -= digits;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		value += ((int)(*str - '0')) * power;
		power /= 10;
		str++;
	}
	return (signal * value);
}

/* int	main(void) */
/* { */
/* 	printf("Number 2147483647 is [%d]\n", ft_atoi("-2147483647")); */
/* 	return (0); */
/* } */
