/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:39:47 by marisous          #+#    #+#             */
/*   Updated: 2026/07/28 09:39:49 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	char	*index_char;
	int		count_chars;

	index_char = str;
	count_chars = 0;
	while (*index_char > 0)
	{
		count_chars++;
		index_char++;
	}
	return (count_chars);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char *test_string; */

/* 	test_string = "Hello Sargedas!"; */
/* 	printf("The string [%s] has %d characters.", */
/* 		   test_string,ft_strlen(test_string)); */
/* } */
/* /\*15*\/ */
