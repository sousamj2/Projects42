/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:26:11 by mravara           #+#    #+#             */
/*   Updated: 2026/07/30 13:26:12 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	number;
	int	signal;

	number = 0;
	signal = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += (*str - '0');
		str++;
	}
	return (number * signal);
}

// int	main(void)
// {
// 	const char *number = " 	-2147483648";
// 	printf("%d\n", ft_atoi(number));
// 	printf("%d\n", atoi(number));

// 	const char *number2 = " 	-+-+48";
// 	printf("%d\n", ft_atoi(number2));
// 	printf("%d\n", atoi(number2));

// 	const char *number3 = " ---+--+1234ab567";
// 	printf("%d\n", ft_atoi(number3));
// 	printf("%d\n", atoi(number3));
// }