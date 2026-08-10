/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:55:46 by marisous          #+#    #+#             */
/*   Updated: 2026/08/10 13:55:48 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int		count_chars;

	count_chars = 0;
	while (*str != '\0')
	{
		count_chars++;
		str++;
	}
	return (count_chars);
}

char	*ft_strdup(char *src)
{
	char	*ret;
	char	*p;

	ret = malloc((1 + ft_strlen(src)) * sizeof(char));
	p = ret;
	while (*src != '\0')
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	return (ret);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char * final; */
/* 	char * src = "test"; */

/* 	final = ft_strdup(src); */
/* 	printf("Copying [%s] to [%s]\n", src, final); */
/* 	return (0); */
/* } */
