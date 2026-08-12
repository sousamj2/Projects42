/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 20:56:44 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/07 13:10:29 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 48 || str[index] > 57)
			return (0);
		index++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*stra;
	char	*strb;

	stra = "1asdasd";
	strb = "23444";
	write(1, ft_str_is_numeric(stra) ? "true\n" : "false\n", 6);
	write(1, ft_str_is_numeric(strb) ? "true\n" : "false\n", 6);
	write(1, ft_str_is_numeric("\0") ? "true\n" : "false\n", 6);
	write(1, ft_str_is_numeric("-443") ? "true\n" : "false\n", 6);
}*/
