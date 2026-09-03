/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 08:54:56 by marisous          #+#    #+#             */
/*   Updated: 2026/09/03 20:36:59 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	main(int argc, char **argv)
{
	unsigned char	string[BUFFER_SIZE];
	int				fd;
	int				bytes_read;

	if (argc < 2)
		ft_puterr("File name missing.\n");
	else if (argc > 2)
		ft_puterr("Too many arguments.\n");
	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		ft_puterr("Cannot read file.\n");
	if (fd < 0)
		return (1);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = ft_getstr(fd, string, BUFFER_SIZE);
		if (bytes_read > 0)
			ft_putstr(string, bytes_read);
	}
	close(fd);
	return (0);
}
