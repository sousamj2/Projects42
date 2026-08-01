/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 09:02:43 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 09:02:45 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	index;

	if (!str)
		return (-1);

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A'
			|| str[index] > 'z'
			|| ('a' < str[index] && str[index] < 'Z'))
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char * test_string = NULL; //"test "; */
/* 	printf("String [%s] is%salphabetic only: function return (%d).\n", */
/* 		   test_string, ft_str_is_alpha(test_string) ? " " : " not ", */
/* 		   ft_str_is_alpha(test_string)); */
/* } */
