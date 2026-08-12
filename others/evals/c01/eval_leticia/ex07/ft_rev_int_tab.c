/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:41:42 by lvieira           #+#    #+#             */
/*   Updated: 2026/08/08 10:47:42 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	if (tab == NULL || tab[0] == '\0')
	{
		return ;
	}
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*void	putnbr(int n)
{
	char	c;

	if (n >= 10)
	{
		putnbr(n / 10);
	}
	c = ((n % 10) + '0');
	write(1, &c, 1);
}

int	main(void)
{
	int	nbrs[6] = {150, 200, 250, 300, 350, 400};
	int	i;
	int	*ptab;

	i = 0;
	ptab = nbrs;
	ft_rev_int_tab(ptab, 6);
	while (i < 6)
	{
		putnbr(nbrs[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
