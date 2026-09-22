/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 21:25:53 by marisous          #+#    #+#             */
/*   Updated: 2026/09/05 16:03:09 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

/**
   params:
   [0]: fd			- file descriptor
   [1]: n_chars		- number of chars to write.
   [2]: bytes_read	- number of bytes that were read.
   [3]: ichar		- index of the char in the string
   [4]: ismulti		- More than 1 loop
   [5]: badStatus   - Flag to terminate program.
*/
void	ft_check_params(int *params);
/**
   params:
   [0]: fd			- file descriptor
   [1]: n_chars		- number of chars to write.
   [2]: bytes_read	- number of bytes that were read.
   [3]: ichar		- index of the char in the string
   [4]: ismulti		- More than 1 loop
   [5]: badStatus   - Flag to terminate program.
   [6]: argi		- Index of processed arguments.
 */
int		ft_tail_one(int *params);
/**
   params:
   [0]: fd			- file descriptor
   [1]: n_chars		- number of chars to write.
   [2]: bytes_read	- number of bytes that were read.
   [3]: ichar		- index of the char in the string
   [4]: ismulti		- More than 1 loop
   [5]: badStatus   - Flag to terminate program.
 */
int		ft_process_arguments(int argc, char **argv, int *params);

int	ft_process_arguments(int argc, char **argv, int *params)
{
	if (argc < 3)
	{
		ft_puterr("Not enough args to execute program\n");
		return (0);
	}
	params[1] = ft_atoi(ft_parse(argc, argv, "-c"));
	params[3] = 0;
	params[4] = 0;
	params[5] = 0;
	params[6] = 3;
	return (1);
}

void	ft_check_params(int *params)
{
	if (params[3] == params[1])
	{
		params[4] = 1;
		params[3] = 0;
	}
	else
		params[3]++;
}

int	ft_tail_one(int *params)
{
	char	*result;
	char	c;

	result = ft_malloc_str(params[1], &params[5]);
	if (params[5])
		return (0);
	while (1)
	{
		c = ft_getchar(params[0], &params[2]);
		if (!params[2])
			break ;
		result[params[3]] = c;
		ft_check_params(params);
	}
	if (params[4])
		ft_putstr(result + params[3] + 1, params[1] - params[3]);
	ft_putstr(result, params[3]);
	free(result);
	return (1);
}

int	main(int argc, char **argv)
{
	int	params[6];
	int	argi;

	argi = 3;
	while (argi <= argc)
	{
		if (argc > 4)
		{
			ft_putstr("==> ", 4);
			ft_putstr(argv[argi], ft_strlen(argv[argi]));
			ft_putstr(" <==\n", 5);
		}
		if (!ft_process_arguments(argc, argv, params))
			return (-1);
		ft_process_file(&params[0], argv[argi], 0);
		ft_tail_one(params);
		ft_process_file(&params[0], argv[argi], 1);
		argi++;
		if (argc > 4 && argi < argc)
			ft_putstr("\n", 1);
		if (!argv[argi])
			return (0);
	}
	return (0);
}
