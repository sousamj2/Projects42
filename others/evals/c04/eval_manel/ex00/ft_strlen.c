/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:25:33 by mravara           #+#    #+#             */
/*   Updated: 2026/07/30 13:25:35 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = "Hello, World!";
// 	i = ft_strlen(str);
// 	printf("Length of string: %d \n", i);
// 	return (0);
// }