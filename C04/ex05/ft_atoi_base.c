/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:38:07 by marisous          #+#    #+#             */
/*   Updated: 2026/08/04 15:38:08 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_get_base_number(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_digit(char *c, char *base);
char	*ft_signcheck(char *str, int *signal);
int		ft_isspace(char *c);

int	ft_isspace(char *c)
{
	return (*c == ' ' || *c == '\f' || *c == '\n'
		|| *c == '\r' || *c == '\t' || *c == '\v');
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

int	ft_atoi_base(char *str, char *base)
{
	int	signal;
	int	value;
	int	digit;
	int	base_n;

	value = 0;
	while (ft_isspace(str))
		str++;
	str = ft_signcheck(str, &signal);
	base_n = ft_get_base_number(base);
	if (! base_n)
		return (0);
	while (*str != '\0')
	{
		digit = ft_digit(str, base);
		if (digit < 0)
			break ;
		value *= base_n;
		value += digit;
		str++;
	}
	return (signal * value);
}

/* //int	main(int argc, char *argv[]) */
/* int	main(void) */
/* { */
/* 	char *input; */
/* 	char *base; */
/* 	int value; */

/* 	input = "A"; */
/* 	base = "0123456789A"; */

/* 	/\* if (argc != 1 && argc != 3) *\/ */
/* 	/\* 	return (1); *\/ */
/* 	/\* if (argc != 3) *\/ */
/* 	/\* { *\/ */
/* 	/\* 	input = argv[1]; *\/ */
/* 	/\* 	base = argv[2]; *\/ */
/* 	/\* } *\/ */
/* 	value = ft_atoi_base(input, base); */
/* printf("With base [%s], the input [%s] give the integer [%d]\n", */
/* 	   base,input,value); */
/* 	return (0); */
/* } */
