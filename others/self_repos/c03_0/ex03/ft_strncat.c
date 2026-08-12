/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:48:45 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 09:48:47 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	int				size_dest;

	index = 0;
	size_dest = ft_strlen(dest);
	while (index < nb && *src != '\0')
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
/* 	//dest = strncat(src, dest, 10); */
/* 	dest = ft_strncat(src, dest, 2); */
/* 	printf("New dest is [%s]\n", dest); */
/* 	return (0); */
/* } */
