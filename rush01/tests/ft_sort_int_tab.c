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

#define SIZE 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

void	ft_display_numbers(int **tab);
void	ft_initialise_tab(int **tab);
void	ft_start_tab(int **tab, unsigned int seedp);
int		set_value(int **tab, int xi, int yi, int val);

int	main(void)
{
	unsigned int	seedp;
	int				**tab;
	int				i_malloc;

	i_malloc = 0;
	tab = malloc(SIZE * sizeof(int*));
	while (i_malloc < SIZE)
	{
		tab[i_malloc] = malloc(SIZE * sizeof(int));
		i_malloc++;
	}

	printf("Initalization complete\n");
	seedp = clock();
	ft_initialise_tab(tab);
	printf("Empty table: \n");
	ft_display_numbers(tab);
	printf("\n\n");
	ft_start_tab(tab, seedp);
	printf("Filled table: \n");
	ft_display_numbers(tab);
}

void	ft_display_numbers(int **tab)
{
	int	xi;
	int	yi;

	xi = 0;
	while (xi < SIZE)
	{
		yi = 0;
		while (yi < SIZE)
		{
			printf("%d ", tab[xi][yi]);
			yi++;
		}
		printf("\n");
		xi++;
	}
}

void	ft_initialise_tab(int **tab)
{
	int	xi;
	int	yi;

	xi = 0;
	while (xi < SIZE)
	{
		yi = 0;
		while (yi < SIZE)
		{
			tab[xi][yi] = 0;
			yi++;
		}
		xi++;
	}
}

int	set_value(int **tab, int xi, int yi, int val)
{
	int	xv;
	int	yv;

	xv = 0;
	yv = 0;
	while (xv < SIZE)
	{
		if (xv == xi)
			continue ;
		if (tab[xv][yi] == val)
			return (1);
		xv++;
	}
	while (yv < SIZE)
	{
		if (yv == yi)
			continue ;
		if (tab[xi][yv] == val)
			return (1);
		yv++;
	}
	printf ("Found tab xi[%d] xf[%d] val[%d]\n",xi,yi,val);
	return (0);
}

void	ft_start_tab(int **tab, unsigned int seedp)
{
	int	not_break;
	int	xi;
	int	yi;
	int val;
	
	xi = 0;
	while (xi < SIZE)
	{
		yi = 0;
		while (yi < SIZE)
		{
			not_break = 1;
			while (not_break)
			{
				val = (rand_r(&seedp) % SIZE);
				not_break = set_value(tab, xi, yi, val);
				yi++;
			}
		}
		xi++;
	}
}
