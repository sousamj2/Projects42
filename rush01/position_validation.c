/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:47:27 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 18:47:28 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visibility(int **grid)
{
	int	vis_up;
	int	vis_do;
	int	column;
	int	row;

	column = 1;
	while (column < 5)
	{
		vis_up = 0;
		vis_do = 0;
		row = 1;
		while (row <= 3)
		{
			if (grid[column][row] > grid[column][row + 1])
				vis_up++;
			if (grid[column][5 - row] > grid[column][4 - row])
				vis_do++;
			row++;
		}
		if (grid[column][0] != vis_do || grid[column][5] != vis_up)
			return (0);
	}
	return (1);
}
