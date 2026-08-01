/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 08:48:25 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 08:49:32 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/* #include <stdio.h> */
/* #include <string.h> */
/* int	main(void) */
/* { */
/* 	char	*src = "Hello Sargedas!"; */
/* 	char	dest[20]; */
/* 	unsigned int n; */

/* 	n=10; */
/* 	printf("src  is [%s]\n",src); */
/* 	/\* ft_strncpy(dest,src,n); *\/ */
/* 	strncpy(dest,src,n); */
/* 	printf("dest is [%s]\n",dest); */
/* 	return (0); */
/* } */
