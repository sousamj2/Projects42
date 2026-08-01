/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:53:27 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 15:53:29 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	index;

	if (!str)
		return (str);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
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
/* 		   ft_strlowcase(test_string)); */
/* } */
