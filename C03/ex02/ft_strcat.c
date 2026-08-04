/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:48:30 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 09:48:31 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (*str != '\0')
	{
		str++;
		index++;
	}
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	size_dest;

	index = 0;
	size_dest = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[index + size_dest] = *src;
		index++;
		src++;
	}
	dest[index + size_dest] = '\0';
	return (dest);
}

/* int	main(void) */
/* { */
/* 	char	src[]	 = "Hello "; */
/* 	char	*dest = "Sargedas!"; */

/* 	printf("src is [%s]\n", src); */
/* 	printf("dest is [%s]\n", dest); */
/* 	//dest = strcat(src,dest); */
/* 	dest = ft_strcat(src, dest); */
/* 	printf("New dest is [%s]\n", dest); */
/* 	return (0); */
/* } */
