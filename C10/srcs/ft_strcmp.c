/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:47:32 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 09:47:33 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if ((*s1) != (*s2))
			return ((*s1) - (*s2));
		s1++;
		s2++;
	}
	return (0);
}

/* #include <stdio.h> */
/* #include <string.h> */
/* int	main(void) */
/* { */
/* 	char	*s1; */
/* 	char	*s2; */
/* 	int		nb; */

/* 	s1 = "Hello Saredas!"; */
/* 	s2 = "Hello Sargedas!"; */
/* 	printf("s1 is [%s]\n",s1); */
/* 	printf("s2 is [%s]\n",s2); */
/* 	nb = ft_strcmp(s1,s2); */
/* 	printf("s1 - s2 = [%d]\n",nb); */
/* 	return (0); */
/* } */
