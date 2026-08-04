/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:49:18 by marisous          #+#    #+#             */
/*   Updated: 2026/08/04 11:34:52 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	retval;

	index = 0;
	retval = ft_strlen(src);
	while (*dest != '\0')
	{
		if (index == size)
			return (retval);
		index++;
		dest++;
		retval++;
	}
	while (*src != '\0')
	{
		if (index +1 < size)
			*dest = *src;
		src++;
		dest++;
		index++;
	}
	*dest = '\0';
	return (retval);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/bsd.h>
// requires additional flag: -lbsd in order to work 
int	main(void)
{
	char	src_1[] = "yyyy";
	char	dest_1[20] = "x";
	unsigned int n;
	unsigned int src_size;
	n=2;

	printf("src  is [%s]\n",src_1);
	src_size = strlcat(dest_1,src_1,n);
	printf("dest is [%s]\n",dest_1);
	printf("src size is [%d] (strlcat)\n\n",src_size);

	char	*src_2 = "yyyy";
	char	dest_2[20] = "x";
	printf("src  is [%s]\n",src_2);
	src_size = ft_strlcat(dest_2,src_2,n);
	printf("dest is [%s]\n",dest_2);
	printf("src size is [%d] (mine)\n",src_size);

	return (0);
}
//*/
