/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 10:20:36 by marisous          #+#    #+#             */
/*   Updated: 2026/09/25 12:37:49 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

unsigned char	*ft_malloc_str(int n_chars, int *bad_status)
{
	unsigned char	*result;

	result = malloc(sizeof(char) * n_chars);
	if (!result)
	{
		ft_puterr("Memory allocation failed: exiting...\n");
		*bad_status = 1;
	}
	return (result);
}
