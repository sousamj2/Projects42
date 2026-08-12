/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcruz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:47:13 by matcruz           #+#    #+#             */
/*   Updated: 2026/08/10 12:12:52 by matcruz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*len;
	int		j;
	int		strlens;

	j = 0;
	strlens = 0;
	if (size == 0)
	{
		len = malloc(1);
		len[0] = '\0';
		return (len);
	}
	while (j < size)
		strlens += ft_strlen(strs[j++]);
	len = malloc((ft_strlen(sep) * (size - 1)) + strlens + 1);
	j = 0;
	*len = '\0';
	while (j < size)
	{
		ft_strcat(len, strs[j]);
		if (j < size - 1)
			ft_strcat(len, sep);
		j++;
	}
	return (len);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	char *a;

	a = ft_strjoin(argc - 1, argv + 1, "vaca");
	
	printf("%s\n", a);
	printf("%s\n", ft_strjoin(0, argv + 1, "porco"));
}*/
