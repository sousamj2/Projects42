/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofdomin <sofdomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:38:13 by sofdomin          #+#    #+#             */
/*   Updated: 2026/08/08 16:03:13 by sofdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/* int	main(int argc, char **argv) */
/* { */
/* 	if (argc != 2) */
/* 		return (0); */
/* 	int result; */

/* 	result = atoi(argv[1]); */
/* 	printf("%d\n", ft_sqrt(result)); */
/* } */

int	main(void)
{
	int index = -2;
	while (index <= 100)
	{
		printf("\\sqrt(%d) = %d\n", index, ft_sqrt(index));
		index++;
	}
	return (0);
}
