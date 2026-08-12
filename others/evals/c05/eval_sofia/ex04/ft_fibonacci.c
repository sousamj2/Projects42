/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofdomin <sofdomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:18:12 by sofdomin          #+#    #+#             */
/*   Updated: 2026/08/08 15:37:21 by sofdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	int index = -2;
	while (index <= 10)
	{
		printf("%d: %d\n", index, ft_fibonacci(index));
		index++;
	}
	return (0);
}

/* int	main(int argc, char **argv) */
/* { */
/* 	if(argc != 2) */
/* 		return (0); */

/* 	int index; */


/* 	index = atoi(argv[1]); */
/* 	printf("%d\n", ft_fibonacci(index)); */
/* } */
