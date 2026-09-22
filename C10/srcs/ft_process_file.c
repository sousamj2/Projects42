/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 10:23:23 by marisous          #+#    #+#             */
/*   Updated: 2026/09/05 16:01:37 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_process_file(int *fd, char *filename, int do_close)
{
	if (do_close)
	{
		if (*fd >= 0)
			close(*fd);
		return ;
	}
	if (!filename || !ft_strlen(filename))
	{
		*fd = 0;
		return ;
	}
	*fd = open(filename, O_RDONLY);
	if (*fd < 0)
	{
		ft_puterr(strerror(77));
		ft_puterr(" ");
		ft_puterr(filename);
		ft_puterr("\n");
	}
}
