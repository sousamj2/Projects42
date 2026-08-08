/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 11:50:19 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 11:50:21 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_sqrt(int nb);

int	ft_perfect_square(int sqrt, int nb);
int	ft_perfect_square(int sqrt, int nb)
{
	if (sqrt * sqrt < 0)
		return (0);
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (ft_perfect_square(sqrt + 1, nb));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	return (ft_perfect_square(2, nb));
}



int	ft_is_prime(int nb)
{
	int test;
	
	if (nb < 2)
		return (0);
	test = 2;
	while (test*test < nb)
	{
		
	}
}

