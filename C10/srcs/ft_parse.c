/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 11:46:20 by marisous          #+#    #+#             */
/*   Updated: 2026/09/04 11:46:20 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	*ft_parse(int argc, char *argv[], char *parse)
{
	int	iarg;

	iarg = 2;
	while (iarg < argc - 1)
	{
		if (!ft_strcmp(argv[iarg], parse))
			return (argv[iarg + 1]);
		iarg++;
	}
	return ("");
}
