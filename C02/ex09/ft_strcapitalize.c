/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:29:37 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 16:29:39 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_isalphanum(char c);

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	capitalize_next;
	int	first_word_done;

	if (!str)
		return (str);
	index = 0;
	capitalize_next = 1;
	first_word_done = 0;
	while (str[index] != '\0')
	{
		if (! first_word_done)
			first_word_done = ft_isalphanum(str[index]);
		if (!capitalize_next && str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		if ((!first_word_done || capitalize_next)
			&& str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
			capitalize_next = 0;
		}
		capitalize_next = !ft_isalphanum(str[index]);
		index++;
	}
	return (str);
}

int	ft_isalphanum(char c)
{
	int	test;

	test = (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9');
	return (test);
}

/* int	main(void) */
/* { */
/* 	char	test_string [] =
	"hi, hOW aRe yoU? 42woRds fORTY-Two; fiFty+AND+one!"; */
/* 	printf("Original string: [%s]\n", test_string); */
/* 	printf("Capitalizes words we get:\n[%s].\n",
	ft_strcapitalize(test_string)); */
/* 	return (0); */
/* } */
