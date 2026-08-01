/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 09:53:31 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 09:53:34 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	index;

	if (!str)
		return (-1);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char * test_string = ""; */
/* 	printf("String [%s] is%suppercase only: function return (%d).\n", */
/* 		   test_string, ft_str_is_uppercase(test_string) ? " " : " not ", */
/* 		   ft_str_is_uppercase(test_string)); */
/* } */
