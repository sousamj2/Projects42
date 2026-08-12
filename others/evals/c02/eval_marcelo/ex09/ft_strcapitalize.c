/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmertz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:38:05 by mmertz            #+#    #+#             */
/*   Updated: 2026/08/09 15:48:27 by mmertz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_alphanumeric(char str)
{
	if ((str > 47 && str < 59)
		|| (str > 64 && str < 91)
		|| (str > 96 && str < 123))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	lf_word;

	lf_word = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (lf_word && ft_is_alphanumeric(str[index]))
		{
			lf_word = 0;
			if (str[index] > 96 && str[index] < 123)
				str[index] -= 32;
		}
		else
		{
			if (str[index] > 64 && str[index] < 91)
				str[index] += 32;
			if (!ft_is_alphanumeric(str[index]))
				lf_word = 1;
		}
		index++;
	}
	return (str);
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

int	main(void)
{
	char example[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_putstr(ft_strcapitalize(example));
	return (0);
}*/
