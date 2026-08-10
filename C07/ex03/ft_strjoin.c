/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:58:01 by marisous          #+#    #+#             */
/*   Updated: 2026/08/10 13:58:03 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strcat(char *dest, char *src, int option);
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

char	*ft_strcat(char *dest, char *src, int option)
{
	int		size_dest;
	char	*p;

	if (!option)
		return (dest);
	p = dest;
	size_dest = ft_strlen(p);
	p += size_dest;
	while (*src != '\0')
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		space;
	int		index;
	char	*retval;

	index = 0;
	space = 1;
	while (index < size)
	{
		space += ft_strlen(*strs) + ft_strlen(sep);
		index++;
		strs++;
	}
	if (size > 0)
		space -= ft_strlen(sep);
	retval = malloc(space * sizeof(char));
	retval[0] = '\0';
	strs -= size;
	while (size > 0)
	{
		retval = ft_strcat(retval, *strs, 1);
		retval = ft_strcat(retval, sep, size > 1);
		strs++;
		size--;
	}
	return (retval);
}

/* int main (int argn, char * argv[]) */
/* { */
/* 	char * string; */
/* 	char *mock[] = {"Hello", "World..."}; */

/* 	if (argn == 1) */
/* 	{ */
/* 		argv = mock; */
/* 		argn = 3; */
/* 	} */
/* 	argv++; */
/* 	string = ft_strjoin(argn-1, argv, ", "); */
/* 	printf("String: [%s]\n", string); */
/* } */
