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

int	process_arguments(int argc, char **argv, int *params);

int	process_arguments(int argc, char **argv, int *params)
{
	if (argc < 4)
	{
		ft_puterr("Not enough args to execute program\n");
		return (0);
	}
	params[0] = open(argv[1], O_RDONLY);
	if (params[0] < 0)
	{
		ft_puterr(strerror(77));
		ft_puterr(" ");
		ft_puterr(argv[1]);
		ft_puterr("\n");
		return (0);
	}
	params[1] = ft_atoi(ft_parse(argc, argv, "-c"));
	params[3] = 0;
	return (1);
}

/**
   params:
   [0]: fd			- file descriptor
   [1]: n_chars		- number of chars to write.
   [2]: bytes_read	- number of bytes that were read.
   [3]: ichar		- index of the char in the string
 */
int	main(int argc, char **argv)
{
	int		params[4];
	char	c;
	char	*result;

	if (!process_arguments(argc, argv, params))
		return (-1);
	result = malloc(sizeof(char) * params[1]);
	if (!result)
	{
		ft_puterr("Memory allocation failed: exiting...\n");
		return (-1);
	}
	while (1)
	{
		c = ft_getchar(params[0], &params[2]);
		if (!params[2])
			break ;
		result[params[3]++] = c;
		if (params[3] == params[1])
			params[3] = 0;
	}
	ft_putstr(result + params[3], params[1] - params[3]);
	ft_putstr(result, params[3]);
	return (0);
}
