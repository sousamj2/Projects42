/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcruz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 17:11:08 by matcruz           #+#    #+#             */
/*   Updated: 2026/08/11 17:05:50 by matcruz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *scr)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = malloc((ft_strlen(scr) + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (scr[i])
	{
		cpy[i] = scr[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*struct_array;
	int			i;

	i = 0;
	struct_array = malloc((ac + 1) * sizeof(t_stock_str));
	if (!struct_array)
		return (NULL);
	while (i < ac)
	{
		struct_array[i].size = ft_strlen(av[i]);
		struct_array[i].str = av[i];
		struct_array[i].copy = ft_strdup(av[i]);
		i++;
	}
	struct_array[i].str = NULL;
	return (struct_array);
}
/*
#include <stdio.h>

int	main(void)
{
	int ac = 5;
	char *av[] = {"potato","rice","beans","salad","ice cream"};
	t_stock_str *dinner;

	dinner = ft_strs_to_tab(ac, av);
	ft_show_tab(dinner);
}*/
