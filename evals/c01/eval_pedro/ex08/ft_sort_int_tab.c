/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 14:40:25 by pedsoare          #+#    #+#             */
/*   Updated: 2026/07/26 17:01:10 by pedsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp_number;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				tmp_number = tab[j];
				tab[j] = tab[j + 1];
				tab [j + 1] = tmp_number;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	int arr[] = {44,25,53,77,21,16,52};
	ft_sort_int_tab(arr,7);
	for(int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/
