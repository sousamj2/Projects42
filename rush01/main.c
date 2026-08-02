/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:09:30 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 20:15:14 by leomiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		**ft_get_possibilities(int **possibilities);
int		**ft_reset_table(int **tab, int size);
//int		ft_input_validation(int **tab, char *input, int size);
void	set_initial(int **tab, int *input);
int		*ft_input_to_array(char *arg);
void	ft_display_6x6(int **tab);
int		ft_input_validation(char *arg);
int		**ft_alloc_possibilities(void);
int		ft_backtracking(int **tab, int **possibilities, int row);

int	main(int argc, char **argv)
{
	int	**tab;
	int	**options;
	int	*input;

	if (argc != 2 || !ft_input_validation(argv[1]))
	{
		write(2, "Error\n", 6);
		return (1);
	}

	tab = NULL;
	tab = ft_reset_table(tab, 6);
	input = ft_input_to_array(argv[1]);
	set_initial(tab, input);
	options = ft_alloc_possibilities();
	ft_get_possibilities(options);
	printf("a. argc = %d\n",argc);
	if (!ft_backtracking(tab,options,1))

	{
		write(2, "Error\n", 6);
		return (1);
	}
	printf("b. argc = %d\n",argc);
	ft_display_6x6(tab);
	printf("c. argc = %d\n",argc);
	return (0);
}

/* printf("Initalization complete\n"); */
/* ft_initialise_tab(tab); */
/* printf("Empty table: \n"); */
/* ft_display_numbers(tab); */
/* printf("\n\n"); */
/* /\* ft_start_tab(tab, seedp); *\/ */
/* printf("Filled table: \n"); */
/* ft_display_numbers(tab); */

void	set_initial(int **tab, int *input)
{
	tab[0][1] = input[0];
	tab[0][2] = input[1];
	tab[0][3] = input[2];
	tab[0][4] = input[3];
	tab[5][1] = input[4];
	tab[5][2] = input[5];
	tab[5][3] = input[6];
	tab[5][4] = input[7];
	tab[1][0] = input[8];
	tab[2][0] = input[9];
	tab[3][0] = input[10];
	tab[4][0] = input[11];
	tab[1][5] = input[12];
	tab[2][5] = input[13];
	tab[3][5] = input[14];
	tab[4][5] = input[15];
}

int	**ft_reset_table(int **tab, int size)
{
	int	xi;
	int	yi;

	yi = 0;
	tab = malloc(size * 8);
	
	while (yi < size)
	{
		tab[yi] = malloc(size * 4);
		yi++;
	}
	xi = 0;
	while (xi < size )
	{
		yi = 0;
		while (yi < size )
		{
			tab[xi][yi] = 0;
			yi++;
		}
		xi++;
	}
	return (tab);
}
