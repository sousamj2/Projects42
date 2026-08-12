/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 20:18:30 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/07 13:08:38 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 65 || str[index] > 122)
			|| (str[index] > 90 && str[index] < 97))
			return (0);
		index++;
	}
	return (1);
}
/*
int	main (main)
{
	char	*as = "asd";
	char	*fg = "fg2";
	
	write(1, ft_str_is_alpha(as) ? "true \n" : "false\n", 6);
	write(1, ft_str_is_alpha(fg) ? "true \n" : "false\n", 6);
	write(1, ft_str_is_alpha("asdasda") ? "true \n" : "false\n", 6);
	write(1, ft_str_is_alpha("dsa%") ? "true \n" : "false\n", 6);

}*/
