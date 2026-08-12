/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:01:35 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/07 13:13:01 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] > 64 && str[index] < 91)
			str[index] += 32;
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
		index++;
	write (1, str, index);
}

int	main(void)
{
	char	word[] = "ASD23EWQ#";
	ft_putstr(ft_strlowcase(word));
}
*/
