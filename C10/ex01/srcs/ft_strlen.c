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
	int		count_chars;

	count_chars = 0;
	while (*str != '\0')
	{
		count_chars++;
		str++;
	}
	return (count_chars);
}
