/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:21:25 by lurodri2          #+#    #+#             */
/*   Updated: 2026/07/30 08:45:30 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	if (!tab || !size)
	{
		return ;
	}
	i = 0;
	while (i < size / 2)
	{
		temp = tab [i];
		tab [i] = tab [size - i - 1];
		tab [size - i - 1] = temp;
		i++;
	}
}
/*int main(void)
{
	int size = 6;
	int tab[] = {1,2,3,4,5,6};
	ft_rev_int_tab(tab,size);
	int i = 0;
	 while (i < size)
        {
                char c = tab[i] + '0';
                write(1, &c, 1);
                i++;
        }
        write(1, "\n", 1);

        return (0);
}*/
