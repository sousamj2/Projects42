/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanotil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:47:02 by ecanotil          #+#    #+#             */
/*   Updated: 2026/08/04 14:20:37 by ecanotil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>
//#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*dup;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
		i++;
	dup = malloc((i + 1) * sizeof(char));
	l = 0;
	if (!dup)
		return (NULL);
	while (l <= i)
	{
		dup[l] = src[l];
		l++;
	}
	return (dup);
}
/*
int	main(void)
{
	char *str;

	str = "hello";
	
	write(1, ft_strdup(str), 5);
	write(1, "\n", 1);
	write(1, strdup(str), 5);
}
*/
