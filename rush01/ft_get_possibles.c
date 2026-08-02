/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_possibles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 17:36:13 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 17:36:18 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	**ft_alloc_possibilities(void)
{
	int	**possibilities;
	int	yi;

	possibilities = malloc(14 * 8);
	if (!possibilities)
		return (NULL);
	yi = 0;
	while (yi < 14)
	{
		possibilities[yi] = malloc(6 * 4);
		if (!possibilities[yi])
			return (NULL);
		yi++;
	}
	return (possibilities);
}

void	ft_get_possibilities(int **possibilities)
{
	static int	data[14][6] = {
	{1, 4, 3, 2, 1, 4}, {1, 4, 1, 2, 3, 2}, {1, 4, 2, 1, 3, 2},
	{1, 4, 2, 3, 1, 3}, {1, 4, 3, 1, 2, 3}, {2, 3, 4, 1, 2, 2},
	{2, 2, 1, 4, 3, 2}, {2, 3, 2, 4, 1, 2}, {2, 1, 4, 2, 3, 2},
	{2, 3, 1, 4, 2, 2}, {2, 2, 4, 1, 3, 2}, {2, 3, 4, 2, 1, 3},
	{2, 1, 4, 3, 2, 3}, {2, 2, 4, 3, 1, 3}};
	int			xi;
	int			yi;

	yi = 0;
	while (yi < 14)
	{
		xi = 0;
		while (xi < 6)
		{
			possibilities[yi][xi] = data[yi][xi];
			xi++;
		}
		yi++;
	}
}
