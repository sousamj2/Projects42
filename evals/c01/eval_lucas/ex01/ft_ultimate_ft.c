/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 13:25:44 by lurodri2          #+#    #+#             */
/*   Updated: 2026/07/30 08:48:40 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_ft(int *********nbr)
{
	if (!nbr)
	{
		return ;
	}
	*********nbr = 42;
}
/*int	main(void)
{
	int	i;

	i = 32;
int	*ft_ptr2 = &i;
int 	**ft_ptr3 = &ft_ptr2;
int 	***ft_ptr4 = &ft_ptr3;
int 	****ft_ptr5 = &ft_ptr4;
int 	*****ft_ptr6 = &ft_ptr5;
int 	******ft_ptr7 = &ft_ptr6;
int 	*******ft_ptr8 = &ft_ptr7;
int 	********ft_ptr9 = &ft_ptr8;
int 	*********ft_ptr10 = &ft_ptr9;



	printf("%d\n", i);
	
	ft_ultimate_ft(NULL);
	
	
	printf("%d\n", i);
	return (0);
}*/
