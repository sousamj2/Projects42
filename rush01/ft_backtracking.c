/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:44:45 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 20:11:20 by leomiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_reset_row(int **tab, int rownb);
int		ft_backtracking(int **tab, int **possibilities, int row);
int		ft_assign_row(int **tab, int *row, int rownb);
int		line_validation(int **grid, int rowb);
int		visibility(int **grid);

int	ft_assign_row(int **tab, int *row, int rownb)
{
	int	col;

	printf("row[0] = %d, row[5] = %d\n",row[0],row[5]);
	col = 1;
	if (tab[0][rownb] == row[0] || tab[5][rownb] == row[5])
	{
		while (col <= 4)
		{
			tab[col][rownb] = row[col];
			col++;
		}
		return (1);
	}
	else if (tab[0][rownb] == row[5] || tab[5][rownb] == row[0])
	{
		while (col <= 4)
		{
			tab[col][rownb] = row[5 - col];
			col++;
		}
		return (1);
	}
	return (0);
}

void	ft_reset_row(int **tab, int rownb)
{
	int	col;

	col = 1;
	while (col <= 4)
	{
		tab[col][rownb] = 0;
		col++;
	}
}

int	ft_backtracking(int **tab, int **options, int row)
{
	int	possib;
	printf("--------------- \n");
	if (row == 5)
		return (1);
	possib = 0;
	while (possib < 14)
	{
		printf("ass row = %d poss %d\n",row,possib);
		if (!ft_assign_row(tab, options[possib], row))
		{
			possib++;
			continue ;
		}
		printf("line_val = %d poss %d\n",row,possib);
		if ((row > 1 && ! line_validation(tab, row))
			//|| ! ft_backtracking(tab, options, row + 1)
			)
		{
			possib++;
			ft_reset_row(tab, row);
			continue ;
		}
		printf("back = %d poss %d\n",row,possib);
		if (//(row > 1 && ! line_validation(tab, row))
			//||
			! ft_backtracking(tab, options, row + 1))
		{
			possib++;
			ft_reset_row(tab, row);
			continue ;
		}
		if (row == 4 && visibility(tab))
			return (1);
	}
	return (0);
}
