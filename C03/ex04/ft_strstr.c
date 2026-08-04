/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:49:02 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 09:49:03 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
1. same lenght
2. str smaller
3. to_find smaller (default)
 */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		index;

	if (*str == '\0' && *to_find == '\0')
		return (str);
	ptr = to_find;
	index = 0;
	while (*str != '\0')
	{
		if (*str == *ptr)
		{
			ptr++;
			index++;
		}
		else
		{
			ptr = to_find;
			index = 0;
		}
		if (*ptr == '\0')
			return (str -= index);
		str++;
	}
	return (NULL);
}

/* int	main(void) */
/* { */
/* 	char	*str = "as"; */
/* 	char	*to_find = ""; */
/* 	char *response = ""; */

/* 	printf("str is [%s]\n", str); */
/* 	printf("search is [%s]\n", to_find); */
/* 	response = strstr(str, to_find); */
/* 	printf("Found at [%s] (strstr)\n",response); */
/* 	response = ft_strstr(str, to_find); */
/* 	printf("Found at [%s] (mine)\n", response); */
/* 	return (0); */
/* } */
