/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 14:38:26 by kagoncal          #+#    #+#             */
/*   Updated: 2026/07/23 15:18:30 by kagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	positivo = 'P';
	negativo = 'N';
	if (n >= 0)
		write (1, &positivo, 1);
	else
		write (1, &negativo, 1);
}

/*
int main(void)
{
	int	n;
	
	n = 0;
	ft_is_negative(n);
	return(0);
}
*/
