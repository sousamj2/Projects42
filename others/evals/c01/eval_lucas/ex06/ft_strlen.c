/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 16:27:52 by lurodri2          #+#    #+#             */
/*   Updated: 2026/07/30 08:44:30 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
	{
		return ;
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int main (void)
{	
	int tamanho = ft_strlen("lucas");
	 char c;

        c = tamanho + '0';
        write(1, &c, 1);
	write(1, "\n", 1);
	ft_strlen("lucas");
	return 0;
}*/
