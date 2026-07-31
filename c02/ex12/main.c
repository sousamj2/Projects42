/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 09:17:18 by marisous          #+#    #+#             */
/*   Updated: 2026/07/31 09:17:20 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*a;

	a = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut fai\
re avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	a = "0123456789abcdef";
	/* a = "a"; */
	ft_print_memory(a,300 );
}
/*
1. Size % 16 = {-1,0,1}
2. Size more than string && len(string) % 16 = {-2,0,+4}
3. Size
 */
