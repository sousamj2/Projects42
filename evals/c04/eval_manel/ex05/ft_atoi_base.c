/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:26:32 by mravara           #+#    #+#             */
/*   Updated: 2026/07/30 13:26:39 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
		return (i);
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (!base || len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			{printf("test %d [%c] [%d]\n",i,base[i],base[i]);
				return (0);}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_position(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signal;
	int	number;
	int	position;

	number = 0;
	signal = 1;
	if (!check_base(base))
		return (0);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	position = check_position(*str, base);
	while (position != -1)
	{
		number = number * ft_strlen(base) + position;
		str++;
		position = check_position(*str, base);
	}
	return (number * signal);
}

int	main(void)
{
	char *number = "   mnl";
	printf("%d\n", ft_atoi_base(number, "manel"));
	printf("%d\n", atoi(number));
}
