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
	char	*c;
	int		index;

	c = str;
	index = 0;
	while (*str != '\0')
	{
		str++;
		index++;
	}
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	int				size_dest;
	unsigned int	retval;

	index = 0;
	size_dest = ft_strlen(dest);
	retval = size_dest + ft_strlen(src);
	while (index + 1 < size && *src != '\0')
	{
		dest[index + size_dest] = *src;
		index++;
		src++;
	}
	dest[index] = '\0';
	return (retval);
}

/* #include <stdio.h> */
/* #include <string.h> */
/* #include <bsd/bsd.h> */
/* /\* requires additional flag: -lbsd in order to work *\/ */
/* int	main(void) */
/* { */
/* 	char	*src_1 = "hello"; */
/* 	char	dest_1[] = "tes"; */
/* 	unsigned int n; */
/* 	unsigned int src_size; */
/* 	n=5; */
/* 	/\* printf("src  is [%s]\n\n",src_1); *\/ */

/* 	printf("src  is [%s]\n",src_1); */
/* 	src_size = strlcat(dest_1,src_1,n); */
/* 	printf("dest is [%s]\n",dest_1); */
/* 	printf("src size is [%d] (strlcat)\n\n",src_size); */

/* 	char	*src_2 = "hello"; */
/* 	char	dest_2[] = "tes"; */
/* 	printf("src  is [%s]\n",src_2); */
/* 	src_size = ft_strlcat(dest_2,src_2,n); */
/* 	printf("dest is [%s]\n",dest_2); */
/* 	printf("src size is [%d] (mine)\n",src_size); */

/* 	return (0); */
/* } */
