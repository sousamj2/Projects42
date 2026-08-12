/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:49:02 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 09:49:03 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		index;

	if (!to_find || !str)
		return (NULL);
	if (*to_find == '\0')
		return (str);
	index = 0;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			to_find++;
			index++;
		}
		else
		{
			to_find -= index;
			index = 0;
		}
		if (*to_find == '\0')
			return (str - index + 1);
		str++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*str = "that atest find me here";
	char	*to_find = "test";
	char *response = "";

	printf("str is [%s]\n", str);
	printf("search is [%s]\n", to_find);
	response = ft_strstr(str, to_find);
	printf("Found at [%s] (mine)\n", response);
	response = strstr(str, to_find);
	printf("Found at [%s] (strstr)\n",response);
	return (0);
}
//*/
