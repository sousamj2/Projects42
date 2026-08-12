/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:00:37 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/09 16:24:38 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (index);
}
/*
void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	write (1, str, index);
}

void	ft_putnumber(int val)
{
	char	natural_to_char;

	if (val == -2147483648)
		write (1, "-2147483648", 11);
	else if (val == 0)
		write (1, "0", 1);
	else if (val < 0)
	{
		write (1, "-", 1);
		ft_putnumber(-val);
	} else
	{
		if (val / 10 > 0)
			ft_putnumber(val/10);
		natural_to_char = '0' + (val % 10);
		write (1, &natural_to_char, 1);
	}
}

int	main(void)
{
	char	src[] = "String source";
	char	dest[20];

	ft_putnumber(ft_strlcpy(dest, src, 13));
	write (1, "\n", 1);
	ft_putstr(dest);
	return (0);
}*/
