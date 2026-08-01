/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 18:43:40 by marisous          #+#    #+#             */
/*   Updated: 2026/07/28 18:43:44 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/* #include <stdio.h> */
/* #include <string.h> */
/* int	main(void) */
/* { */
/* 	char	*src = "Hello Sargedas!"; */
/* 	char	dest[20]; */
/* 	printf("src  is [%s]\n",src); */
/* 	ft_strcpy(dest,src); */
/* 	/\* strcpy(dest,src); *\/ */
/* 	printf("dest is [%s]\n",dest); */
/* 	return (0); */
/* } */
