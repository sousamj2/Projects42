/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:44:36 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/04 15:50:01 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 65 || str[index] > 90)
			return (0);
		index++;
	}
	return (1);
}
/*
int	main(void)
{
	int asd;
	
	asd = ft_str_is_uppercase("ASDASDASDXW") + 48;
	write (1, &asd , 1);
	write (1, "\n" , 1);
	asd = ft_str_is_uppercase("asdas1dasd") + 48;
	write (1, &asd , 1);
}*/
