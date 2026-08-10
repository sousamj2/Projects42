/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:57:45 by marisous          #+#    #+#             */
/*   Updated: 2026/08/10 13:57:46 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	val;

	if (max <= min)
	{
		range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!range || !*range)
		return (-1);
	p = *range;
	val = min;
	while (val < max)
	{
		*p = val;
		p++;
		val++;
	}
	return (max - min);
}

/* #include <stdio.h> */
/* int main () */
/* { */
/* 	int min = 4; */
/* 	int max = 5; */
/* 	int it = 0; */
/* 	int * test; */
/* 	int nlist = ft_ultimate_range(&test,min,max); */
/* 	while (it < (max - min)) */
/* 	{ */
/* 		printf("%d, ", *test); */
/* 		test++; */
/* 		it++; */
/* 	} */
/* 	printf("\b\b\nPointer is [%p]\nN elements = %d\n",test,nlist); */
/* } */
