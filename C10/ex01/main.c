/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <student.42lisboa.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 08:52:30 by marisous          #+#    #+#             */
/*   Updated: 2026/08/17 14:56:14 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <string.h>

int	ft_cat_file (char * argvi)
{
	unsigned char	string[BUFFER_SIZE];
	int				bytes_read;
	int				fd;
	int				total_read;

	total_read = 0;
	fd = open(argvi, O_RDONLY);
	if (fd < 0)
	{
		ft_puterr(strerror(77));
		ft_puterr(" ");
		ft_puterr(argvi);
		ft_puterr("\n");
		return (0);
	}
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = ft_getstr(fd, string, BUFFER_SIZE);
		if (bytes_read > 0)
			ft_putstr(string, bytes_read);
		total_read += bytes_read;
	}
 	close(fd);
	return (total_read);
}



int	main(int argc, char **argv)
{
	int	total_read;
	int	argi;
	unsigned char	string[30000];
	
	argi = 1;
	total_read = 0;
	while (argi < argc && total_read < 30000)
	{
		total_read += ft_cat_file(argv[argi]);
		argi++;
	}
	if (argc ==1)
	{
		total_read = ft_getstr(0, string, 30000);
		if (total_read > 0)
			ft_putstr(string, total_read);
		//printf("total read: %d\n", total_read);
	}
		
	
	return (0);
}
