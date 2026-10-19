/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:14:30 by marisous          #+#    #+#             */
/*   Updated: 2026/09/25 12:47:32 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <stdlib.h>

/**
   params:
   [0]: fd			- file descriptor
   [1]: ascii_disp	- use also ASCII display.
   [2]: argi		- argv index
   [3]: ichar		- index of the char in the string
   [4]: lenght		- size of all files
   [5]: bytes read  - Did we read or not a new byte.
   [6]: endProgram  - Flag to terminate program.
   [7]: lastFile	- Are we looking at the last file.
*/
int	ft_process_arguments(int argc, char **argv, int *params)
{
	if (argc < 2)
	{
		ft_puterr("Not enough args to execute program\n");
		return (0);
	}
	params[1] = (ft_strcmp(argv[1], "-C") == 0);
	params[2] = 1;	
	if (params[1] && argc < 3)
	{
		ft_puterr("Not enough args to execute program\n");
		return (0);
	}
	if (params[1])
		params[2]++;	
	params[3] = 0;
	params[4] = 0;
	params[5] = 1;
	params[6] = 0;
	params[7] = 0;	
	return (1);
}

void	ft_printline(int *params, unsigned char *result, int size)
{
	unsigned int nb;

	nb = 0;
	/* params[3] = 0; */
	params[3] = params[4] % 16;
	params[6] = (size == 0 && params[7]);
	
	// 1. Terminate if size is 0 (nothing to print)
	if (size == 0 && !params[7])
		return;

	// 2. print value of params[4] (missing default version)
	ft_putnbr16(params[4], params, 1);

	// 3. If size not 0 print all hex content (max 16)
	while (params[3] < size)
	{
		nb = ft_convert_char_to_int((result[params[3]++]));
		if (!params[1])
		{
			// 2.1 handle default behaviour (switch 2 hexa values)
			nb |= ft_convert_char_to_int((result[params[3]++])) << 8;
		}
		ft_putnbr16(nb, params, 0);
	}

	// 4. handle end formatting
	if (params[6])
		ft_handle_end(params);
		
	// 5. write chars if -C option
	if (params[1])
		ft_write_16_chars(result, size);
	else
		write(1,"\n",1);

	// N. Increment total size by the size.
	params[4] += size;
}



int	ft_hexdump_one(int *params, unsigned char *result)
{
	/* unsigned char c; */
	int size;
	int missing;
	missing = params[4] % 16;
	while (1)
	{
		size = ft_getstr(params[0], result, 16 - missing) + missing;
		missing = 0;
		/* printf("result is %s\n",result); */
		ft_printline(params, result, size);
		
		if (size < 16)
			break ;
	}

	
	return (1);
}


int	main(int argc, char **argv)
{
	int	params[8];
	unsigned char *result;
	
	if (!ft_process_arguments(argc, argv, params))
		return (-1);

	result = ft_malloc_str(16, &params[6]);
	//printf("address of result is [%p]\n",result);
	if (params[6])
		return (-1);

	while (params[2] <= argc)
	{
		params [7] = (params[2] == argc - 1) ;
		//printf("Trying to open params[2] = [%d], [%s]\n",params[2],argv[params[2]]);
		ft_process_file(&params[0], argv[params[2]], 0); // open file
		//printf("File open successfully\n");
		ft_hexdump_one(params, result);
		ft_process_file(&params[0], argv[params[2]], 1); // close file
		params[2]++;
		if (!argv[params[2]])
			return (0);
	}
	free(result);
	
	return (0);
}

