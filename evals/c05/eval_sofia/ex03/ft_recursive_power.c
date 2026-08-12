/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofdomin <sofdomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 14:46:52 by sofdomin          #+#    #+#             */
/*   Updated: 2026/08/08 15:17:26 by sofdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(int argc, char	**argv)
{
	int	number;
	int	power;

	if (argc != 3)
		return (0);
	number = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("Result = %d\n", ft_recursive_power(number, power));
	return (0);
}
