/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:21:44 by marisous          #+#    #+#             */
/*   Updated: 2026/07/28 09:21:46 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putstr(char *str)
{
	char	*index_c;

	index_c = str;
	while (*index_c > 0)
	{
		ft_putchar(*index_c);
		index_c++;
	}
}
