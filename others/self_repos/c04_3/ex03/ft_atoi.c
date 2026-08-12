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
char	*ft_signcheck(char *str, int *pii, long long *pll);
long	ft_get_power_base(int digits, int base);
int		ft_limit_check(char *str, int *pii, int check_spaces);

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

/**
   This function is used to check the sign of the number based on
   the number of minus signs, while initializing the two arrays.

	pii[0] : digits
	pii[1] : signal
	pll[0] : value
	pll[1] : power
 */
char	*ft_signcheck(char *str, int *pii, long long *pll)
{
	pii[0] = 0;
	pii[1] = 1;
	pll[0] = 0;
	pll[1] = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			(pii[1]) *= -1;
		str++;
	}
	return (str);
}

/**
   Function that can check:
   check_spaces == 1: if the given character is a space or not.
   check_spaces == 0: if the string shows a number larger than long long.
   The latter uses string comparison.
	pii[0]: digits
	pii[1]: signal
 */
int	ft_limit_check(char *str, int *pii, int check_spaces)
{
	char	*test_min;
	char	*test_max;

	if (check_spaces)
		return (*str == ' ' || *str == '\f' || *str == '\n'
			|| *str == '\r' || *str == '\t' || *str == '\v');
	if (pii[0] < 19)
		return (1);
	test_min = "9223372036854775808";
	test_max = "9223372036854775807";
	while (*str != '\0')
	{
		if (*str < *test_max)
			return (1);
		if (pii[1] > 0 && (*str > *test_max || pii[0] > 19))
			return (-1);
		else if (pii[1] < 0 && (*str > *test_min || pii[0] > 19))
			return (0);
		str++;
		test_max++;
		test_min++;
	}
	return (1);
}

/**
   Implementation of the function ft_atoi to reproduce the atoi
   function from the stdlib.h library, including overflow checks.
 */
int	ft_atoi(char *str)
{
	int			pii[2];
	long long	pll[2];

	while (ft_limit_check(str, pii, 1))
		str++;
	str = ft_signcheck(str, pii, pll);
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		pii[0]++;
		str++;
	}
	pll[1] = ft_get_power_base(pii[0], 10);
	str -= pii[0];
	if (ft_limit_check(str, pii, 0) != 1)
		return (ft_limit_check(str, pii, 0));
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		pll[0] += ((int)(*str - '0')) * pll[1];
		pll[1] /= 10;
		str++;
	}
	return ((int)(pii[1] * pll[0]));
}

/* #include <stdio.h> */
/* #include <stdlib.h> */
/* int	main(void) */
/* { */
/* 	char * str = "-9223372036854775807"; */
/* 	printf("Number of string [%s] is [%d]\n", str, ft_atoi(str)); */
/* 	printf("Real atoi gives [%d]\n",atoi(str)); */
/* 	return (0); */
/* } */
