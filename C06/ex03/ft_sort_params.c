/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:26:19 by marisous          #+#    #+#             */
/*   Updated: 2026/08/10 11:26:21 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **argv, int iarg, int jarg);

void	ft_swap(char **argv, int iarg, int jarg)
{
	char	*temporary_pointer;

	temporary_pointer = argv[iarg];
	argv[iarg] = argv[jarg];
	argv [jarg] = temporary_pointer;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if ((*s1) != (*s2))
			return ((*s1) - (*s2));
		s1++;
		s2++;
	}
	return (0);
}

void	ft_print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argn, char **test)
{
	int		iarg;
	int		jarg;
	char	**argv;

	argv = test;
	iarg = 1;
	while (iarg < argn - 1)
	{
		jarg = iarg + 1;
		while (jarg < argn)
		{
			if (ft_strcmp(argv[jarg], argv[iarg]) < 0)
				ft_swap(argv, iarg, jarg);
			jarg++;
		}
		iarg++;
	}
	iarg = 1;
	while (iarg < argn)
	{
		ft_print_str(argv[iarg]);
		iarg++;
	}
	return (0);
}
