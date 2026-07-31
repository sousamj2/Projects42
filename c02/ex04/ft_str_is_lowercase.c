/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 09:47:05 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 09:47:08 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	index;

	if (!str)
		return (-1);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'a' || str[index] > 'z')
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char * test_string = "test"; */
/* 	printf("String [%s] is%slowercase only: function return (%d).\n", */
/* 		   test_string, ft_str_is_lowercase(test_string) ? " " : " not ", */
/* 		   ft_str_is_lowercase(test_string)); */
/* } */
