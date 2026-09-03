/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:39:47 by marisous          #+#    #+#             */
/*   Updated: 2026/07/28 09:39:49 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	char	*index_char;
	int		count_chars;

	index_char = str;
	count_chars = 0;
	while (*index_char > 0)
	{
		count_chars++;
		index_char++;
	}
	return (count_chars);
}
