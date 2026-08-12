/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:51:29 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/09 15:49:43 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 31 || str[index] > 126)
			return (0);
		index++;
	}
	return (1);
}
/*
int	main (void)
{
	char	enter;
	enter = 32;
	write (1, ft_str_is_printable(&enter) ? "true \n" : "false\n", 6);
	return (0);
}*/
