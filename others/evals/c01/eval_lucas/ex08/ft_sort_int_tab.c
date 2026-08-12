/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:48:29 by lurodri2          #+#    #+#             */
/*   Updated: 2026/07/30 08:47:06 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	if (!tab || !size)
	{
		return ;
	}
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab [i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*int main(void)
{
        int size = 6;
        int tab[] = {1,6,4,3,5,6};
        ft_sort_int_tab(tab,size);
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
