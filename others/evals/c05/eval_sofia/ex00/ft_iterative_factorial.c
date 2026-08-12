/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofdomin <sofdomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:40:27 by sofdomin          #+#    #+#             */
/*   Updated: 2026/08/08 12:22:13 by sofdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s\n", argv[0]);
		return (1);
	}

	int	test = (int)strtol(argv[1], NULL, 10);

	int	factorial = ft_iterative_factorial(test);
	printf("the factorial of %d is : %d\n", test, factorial);
	return (0);
}
