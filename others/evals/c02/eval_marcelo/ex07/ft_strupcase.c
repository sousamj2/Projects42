/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 11:44:00 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/09 16:50:55 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 96 && str[index] < 123)
			str[index] -= 32;
		index++;
	}
	return (str);
}
/*
void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	write (1, str, index);
}

int	main (void)
{
	char	alpha[]  = "asd123asdASd";
	ft_strupcase(alpha);
	ft_putstr(alpha);
	return (0);
}	
*/
