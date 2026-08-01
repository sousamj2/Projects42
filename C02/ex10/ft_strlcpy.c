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

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	ret_size;

	/* if (!src || !dest) */
	/* 	return (-1); */
	index = 0;
	ret_size = 0;
	while (index < size - 1 && src[index] != '\0')
	{
		dest[index] = src[index];
		ret_size++;
		index++;
	}
	while (src[ret_size] != '\0')
		ret_size++;
	if (index < size)
	{
		dest[index] = '\0';
		return (ret_size);
	}
	return (ret_size);
}

/* #include     <stdio.h> */
/* int	main(void) */
/* { */
/* 	char	*src = "Hello Sargedas!"; */
/* 	char	dest[20]; */
/* 	unsigned int n; */
/* 	unsigned int src_size; */
	
/* 	n=10; */
/* 	src_size = ft_strlcpy(dest,src,n); */
/* 	/\* src_size = strlcpy(dest,src,n); *\/ */
/* 	printf("src  is [%s]\n",src); */
/* 	printf("dest is [%s]\n",dest); */
/* 	printf("src size is [%d]\n",src_size); */
/* 	return (0); */
/* } */
