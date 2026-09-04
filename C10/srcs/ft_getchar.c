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

#include <unistd.h>
#include "ft.h"

char	ft_getchar(int fd, int *bytes_read)
{
	char	c;

	*bytes_read = read(fd, &c, 1);
	return (c);
}
