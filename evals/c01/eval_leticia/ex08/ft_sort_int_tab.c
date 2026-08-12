/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:45:21 by lvieira           #+#    #+#             */
/*   Updated: 2026/08/08 11:02:31 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	if (tab == NULL || size <= 0)
	{
		return ;
	}
	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

/*void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = ((n % 10) + '0');
	write(1, &c, 1);
}

int	main(void)
{
	int	nbrs[7] = {150, 450, 650, 250, 350, 550, 750};
	int	i;
	int	*pnbrs;

	pnbrs = nbrs;
	i = 0;
	ft_sort_int_tab(pnbrs, 7);
	while (i < 7)
	{
		ft_putnbr(nbrs[i]);
		write (1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
