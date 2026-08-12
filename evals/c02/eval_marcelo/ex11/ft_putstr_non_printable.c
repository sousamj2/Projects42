/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:38:24 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/09 16:25:33 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[16];
	int		index;
	int		aux;

	hex = "0123456789abcdef";
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 31 && str[index] < 177)
			write(1, &str[index], 1);
		else
		{
			aux = str[index] / 16;
			write (1, &hex[aux], 1);
			aux = str[index] % 16;
			write (1, &hex[aux], 1);
		}
		index++;
	}
}
/*
int	main(void)
{
	char	str[] = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
}
*/
