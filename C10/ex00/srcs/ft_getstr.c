/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:55:21 by marisous          #+#    #+#             */
/*   Updated: 2026/07/23 13:55:26 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_getstr(int fd, unsigned char *string)
{
	int	bytes_read;

	bytes_read = read(fd, string, BUFFER_SIZE);
	return (bytes_read);
}
