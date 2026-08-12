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

int		ft_atoi(char *str);
char	*ft_signcheck(char *str, int *signal, long long *value, int *digits);
long	ft_get_power_base(int digits, int base);
int		ft_isspace(char *c);
int		ft_limit_check(char *str, int signal, int digits);

int	ft_limit_check(char *str, int signal, int digits)
{
	char	*test_min;
	char	*test_max;

	if (digits < 19)
		return (1);
	test_min = "9223372036854775808";
	test_max = "9223372036854775807";
	while (*str != '\0')
	{
		if (signal > 0 && (*str > *test_max || digits > 19))
			return (-1);
		else if (signal < 0 && (*str > *test_min || digits > 19))
			return (0);
		str++;
		test_max++;
	}
	return (1);
}

int	ft_isspace(char *c)
{
	return (*c == ' ' || *c == '\f' || *c == '\n'
		|| *c == '\r' || *c == '\t' || *c == '\v');
}

long	ft_get_power_base(int digits, int base)
{
	int		index;
	long	power;

	power = 1;
	index = 0;
	while (index < digits - 1)
	{
		power *= base;
		index++;
	}
	return (power);
}

char	*ft_signcheck(char *str, int *signal, long long *value, int *digits)
{
	*signal = 1;
	*value = 0;
	*digits = 0;
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
	long long	value;
	int			signal;
	int			digits;
	long long	power;

	while (ft_isspace(str))
		str++;
	str = ft_signcheck(str, &signal, &value, &digits);
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		digits++;
		str++;
	}
	power = ft_get_power_base(digits, 10);
	str -= digits;
	if (ft_limit_check(str, signal, digits) != 1)
		return (ft_limit_check(str, signal, digits));
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		value += ((int)(*str - '0')) * power;
		power /= 10;
		str++;
	}
	return ((int)(signal * value));
}

/* #include <stdio.h> */
/* #include <stdlib.h> */
/* int	main(void) */
/* { */
/* 	char * str = "42"; */
/* 	printf("Number of string [%s] is [%d]\n", str, ft_atoi(str)); */
/* 	printf("Real atoi gives [%d]\n",atoi(str)); */
/* 	return (0); */
/* } */
