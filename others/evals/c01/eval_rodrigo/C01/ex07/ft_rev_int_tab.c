/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 12:51:35 by rodrigfe          #+#    #+#             */
/*   Updated: 2026/08/12 11:40:56 by rodrigfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	vet;

	i = 0;
	while (i < size / 2)
	{
		vet = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = vet;
		i++;
	}
}
/*int main()
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = 10;
	ft_rev_int_tab(tab, size);
}*/
