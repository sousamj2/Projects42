/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 09:40:00 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 09:40:02 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	index;

	if (!str)
		return (0);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char * test_string = "252364d24"; */
/* 	printf("String [%s] is%snumerical only: function return (%d).\n", */
/* 		   test_string, ft_str_is_numeric(test_string) ? " " : " not ", */
/* 		   ft_str_is_numeric(test_string)); */
/* } */
