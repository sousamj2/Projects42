/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 11:30:16 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 11:30:18 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	index;

	if (!str)
		return (str);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char test_string[] = "Hello Sargedas!"; */
/* 	printf("String [%s] in uppercase is ", */
/* 		   test_string); */
/* 	printf("[%s].\n", */
/* 		   ft_strupcase(test_string)); */
/* } */
