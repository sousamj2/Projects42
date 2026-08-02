/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_v.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leomiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:34:56 by leomiran          #+#    #+#             */
/*   Updated: 2026/08/02 15:31:51 by leomiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	line_validation(int **grid, int rowb)
{
	int	column;
	int	rowa;

	column = 1;
	while (column < 5)
	{
		rowa = 1;
		while (rowa < rowb)
		{
			if (grid[column][rowa] == grid[column][rowb])
				return (0);
		}
		rowa++;
	}
	column++;
	return (1);
}
