/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofdomin <sofdomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 13:26:55 by sofdomin          #+#    #+#             */
/*   Updated: 2026/08/09 12:35:54 by sofdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		result = result * nb;
		power --;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int number;
	int power;

	if (argc != 3)
		return 0;
	number = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("Result = %d\n", ft_iterative_power(number, power));
	return 0;
}
