/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcruz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:31:25 by matcruz           #+#    #+#             */
/*   Updated: 2026/08/10 10:45:27 by matcruz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int		*nbrs;
	int		i = 0;
	int		min = 10;
	int		max = 70;
	int		size = max - min;

	nbrs = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", nbrs[i]);
		i++;
	}
}*/
