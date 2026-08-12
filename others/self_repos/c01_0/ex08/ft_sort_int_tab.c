/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 10:23:59 by marisous          #+#    #+#             */
/*   Updated: 2026/07/28 10:24:01 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	ft_bubble_sort(int *tab, int size);
void	ft_swap(int *a, int *b);
void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tmp_val;

	index = 0;
	while (index < size / 2)
	{
		tmp_val = tab [size - index - 1];
		tab [size - index - 1] = tab [index];
		tab[index] = tmp_val;
		index++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temporary_pointer;

	temporary_pointer = *a;
	*a = *b;
	*b = temporary_pointer;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	tab_i;
	int	n_wrong;

	tab_i = 0;
	n_wrong = 0;
	while (tab_i < size - 1)
	{
		if (tab[tab_i] > tab[tab_i + 1])
			n_wrong++;
		tab_i++;
	}
	if (size < 2 * n_wrong)
		ft_rev_int_tab(tab, size);
	ft_bubble_sort(tab, size);
}

void	ft_bubble_sort(int *tab, int size)
{
	int	tab_i;
	int	tab_j;

	tab_i = 0;
	while (tab_i < size)
	{
		tab_j = tab_i + 1;
		while (tab_j < size)
		{
			if (tab[tab_i] > tab[tab_j])
				ft_swap(&tab[tab_i], &tab[tab_j]);
			tab_j++;
		}
		tab_i++;
	}
}

/* #include <stdio.h> */
/* #include <stdlib.h> */
/* #include <time.h> */

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
/* 	unsigned int	seedp; */
/* 	int				size; */
/* 	int				index; */
/* 	int				tab[11]; */

/* 	seedp = clock(); */
/* 	size = 11; */
/* 	index = 0; */
/* 	while (index < size) */
/* 	{ */
/* 		tab[index] = (rand_r(&seedp) - RAND_MAX / 2) % 1000 ; */
/* 		index++; */
/* 	} */
/* 	printf("Before: "); */
/* 	ft_display_numbers(tab, size); */
/* 	ft_sort_int_tab(tab, size); */
/* 	printf("After: "); */
/* 	ft_display_numbers(tab, size); */
/* } */
