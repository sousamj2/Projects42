/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 11:09:12 by pedsoare          #+#    #+#             */
/*   Updated: 2026/07/26 14:39:34 by pedsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	current_index;
	int	max_index;
	int	tmp_number;

	current_index = 0;
	max_index = size - 1;
	while (current_index + 1 <= size / 2)
	{
		tmp_number = tab[current_index];
		tab[current_index] = tab[max_index - current_index];
		tab[max_index - current_index] = tmp_number;
		current_index++;
	}
}
/*
void write_arr(int *arr, int size)
{
	int	index;
	
	index = 0;
	while(index < size)
	{
		printf("%d", arr[index]);
		index++;
	}
	printf("\n");
}

int main()
{
	int	arr[10];
	int	index;
	
	index = 0;
	arr[0] = 3;
	arr[1] = 6;
	arr[2] = 8;
	arr[3] = 9;
	arr[4] = 6;
        arr[5] = 5;
	arr[6] = 0;
        arr[7] = 2;
	arr[8] = 1;
        arr[9] = 4;

	write_arr(arr, 10);
	ft_rev_int_tab(arr, 10);
	write_arr(arr,10);
	return 0;
}
*/
