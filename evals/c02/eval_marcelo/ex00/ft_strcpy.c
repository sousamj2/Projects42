/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 17:26:44 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/07 13:03:39 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
void	ft_putstr(char *c)
{
	int	index;

	index = 0;
	while (c[index] != '\0')
	{
		index++;
	}
	write (1, c, index);
}

int	main(void)
{
	char	str_c[5];

	ft_strcpy(str_c, "hello!");
	ft_putstr(str_c);
	write (1, "\n", 1);
	ft_putstr(ft_strcpy(str_c, "byee!"));
}*/
