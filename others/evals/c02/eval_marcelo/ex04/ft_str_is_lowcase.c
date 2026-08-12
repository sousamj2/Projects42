/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 21:06:56 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/09 15:50:53 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 97 || str[index] > 122))
			return (0);
		index++;
	}
	return (1);
}
/*
int	main(void)
{
	int asd;
	
	asd = ft_str_is_lowercase("asdasdasd") + 48;
	write (1, &asd , 1);
	write (1, "\n" , 1);
	asd = ft_str_is_lowercase("asdas1dasd") + 48;
	write (1, &asd , 1);
	return (0);
}*/
