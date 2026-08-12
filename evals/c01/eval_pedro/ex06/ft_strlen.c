/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 10:37:55 by pedsoare          #+#    #+#             */
/*   Updated: 2026/07/26 11:08:33 by pedsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
/*
int main()
{
	int	str_lenght;

	str_lenght = ft_strlen("Hello!");
	printf("%d\n", str_lenght); 
	return 0;
}
*/
