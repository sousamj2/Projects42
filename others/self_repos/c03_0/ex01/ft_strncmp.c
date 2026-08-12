/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:48:07 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 09:48:09 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((*s1 != '\0' || *s2 != '\0') && index != n)
	{
		if ((*s1) != (*s2))
			return ((*s1) - (*s2));
		s1++;
		s2++;
		index++;
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

/* 	s1 = "Hello Sargedas!"; */
/* 	s2 = "Hello Sargedas!"; */
/* 	printf("s1 is [%s]\n",s1); */
/* 	printf("s2 is [%s]\n",s2); */
/* 	nb = ft_strncmp(s1,s2,150); */
/* 	printf("s1 - s2 = [%d]\n",nb); */
/* 	return (0); */
/* } */
