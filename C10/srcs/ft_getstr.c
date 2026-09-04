/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:55:21 by marisous          #+#    #+#             */
/*   Updated: 2026/09/03 20:38:12 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_getstr(int fd, char *string, int buffer_size)
{
	int	bytes_read;

	bytes_read = read(fd, string, buffer_size);
	return (bytes_read);
}
