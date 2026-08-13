/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <lurodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:55:00 by lucas             #+#    #+#             */
/*   Updated: 2026/08/12 15:02:55 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int ac, char *av[])
{
	int	i;
	int	j;

	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			write(1, &av[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char *av[])
{
	int		j;
	char	*temp;

	if (ac < 2)
		return (0);
	j = 1;
	while (j < ac - 1)
	{
		if (ft_strcmp(av[j], av[j + 1]) > 0)
		{
			temp = av[j];
			av[j] = av[j + 1];
			av[j + 1] = temp;
			j = 0;
		}
		else
			j++;
	}
	ft_print(ac, av);
	return (0);
}
