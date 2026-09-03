/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 21:25:53 by marisous          #+#    #+#             */
/*   Updated: 2026/09/03 21:25:53 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "stdlib.h"

int process_arguments(int argc, int * n_chars, char **argv);

int process_arguments(int argc, int * n_chars, char **argv)
{
	if (argc < 4)
    {
		ft_puterr("Not enough args to execute program\n");
		return (0);
	}
	*n_chars = ft_atoi(ft_parse(argc, argv, "-c"));
	return (1);
}	

int main(int argc, char **argv)
{
	int		n_chars;
	char	*filename;

	filename = argv[1];
	if (!process_arguments(argc, &n_chars, argv))
		return (-1);
	result = malloc(sizeof(char) * n_chars);
	
	
    return (0);
}
