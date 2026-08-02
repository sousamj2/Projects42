/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leomiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:17:05 by leomiran          #+#    #+#             */
/*   Updated: 2026/08/02 18:48:27 by leomiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_input_to_array(char *arg)
{
	int	i;
	int	*array_n;
	int	j;

	i = 0;
	j = 0;
	array_n = malloc(16 * 4);
	if (array_n == NULL)
		return (NULL);
	while (arg[i] != '\0')
	{
		if (arg[i] >= '1' && arg[i] <= '4')
		{
			array_n[j] = arg[i] - '0';
			j++;
		}
		i++;
	}
	return (array_n);
}

/* #include <stdio.h> */

/* int	main(int argc, char **argv) */
/* { */
/* 	int	i = 0; */
/* 	int	*array_n; */

/* 	if (argc != 2) */
/* 		return (0); */
/* 	array_n = input_to_array(argv[1]); */
/* 	while (i < 16) */
/* 	{ */
/* 		printf("%d", array_n[i]); */
/* 		i++; */
/* 	} */
/* 	printf("\n"); */
/* 	return (0); */
/* } */
