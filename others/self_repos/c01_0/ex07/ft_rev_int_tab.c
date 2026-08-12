/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:53:51 by marisous          #+#    #+#             */
/*   Updated: 2026/07/28 09:53:54 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tmp_val;

	index = 0;
	while (index < size / 2)
	{
		tmp_val = tab[size - index - 1];
		tab [size - index - 1] = tab [index];
		tab[index] = tmp_val;
		index++;
	}
}

/* #include <stdio.h> */

/* void	ft_display_numbers(int *tab, int size); */

/* void	ft_display_numbers(int *tab, int size) */
/* { */
/* 	int	index; */

/* 	index = 0; */
/* 	while (index < size) */
/* 	{ */
/* 		printf("%d", tab[index]); */
/* 		if (index + 1 < size) */
/* 			printf(", "); */
/* 		index++; */
/* 	} */
/* 	printf("\n"); */
/* } */

/* int	main(void) */
/* { */
/* 	int	size; */
/* 	int	index; */
/* 	int	tab[11]; */

/* 	size = 11; */
/* 	index = 0; */
/* 	while (index < size) */
/* 	{ */
/* 		tab[index] = index; */
/* 		index++; */
/* 	} */
/* 	printf("Before: "); */
/* 	ft_display_numbers(tab, size); */
/* 	ft_rev_int_tab(tab, size); */
/* 	printf("After: "); */
/* 	ft_display_numbers(tab, size); */
/* } */
