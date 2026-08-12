/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 18:19:55 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 18:20:00 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

unsigned int	ft_strlen(char *str)
{
	char			*index_char;
	unsigned int	count_chars;

	index_char = str;
	count_chars = 0;
	while (*index_char > 0)
	{
		count_chars++;
		index_char++;
	}
	return (count_chars);
}

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	ret_size;

	index = 0;
	ret_size = 0;
	while (index + 1 < size && src[index] != '\0')
	{
		dest[index] = src[index];
		ret_size++;
		index++;
	}
	while (src[ret_size] != '\0')
		ret_size++;
	if (index < size)
		dest[index] = '\0';
	return (ret_size);
}

/* #include <stdio.h> */
/* #include <string.h> */
/* #include <bsd/bsd.h> */
/* /\* requires additional flag: -lbsd in order to work *\/ */
/* int	main(void) */
/* { */
/* 	char	*src = "hello"; */
/* 	char	dest[] = "A"; */
/* 	unsigned int n; */
/* 	unsigned int src_size; */
/* 	n=1; */
/* 	src_size = strlcpy(dest,src,n); */
/* 	printf("src  is [%s]\n",src); */
/* 	printf("dest is [%s]\n",dest); */
/* 	printf("src size is [%d] (strlcpy)\n\n",src_size); */
/* 	src_size = ft_strlcpy(dest,src,n); */
/* 	printf("dest is [%s]\n",dest); */
/* 	printf("src size is [%d] (mine)\n",src_size); */
/* 	return (0); */
/* } */
