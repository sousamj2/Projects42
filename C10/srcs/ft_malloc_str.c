/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 10:20:36 by marisous          #+#    #+#             */
/*   Updated: 2026/09/05 16:01:53 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

char	*ft_malloc_str(int n_chars, int *bad_status)
{
	char	*result;

	result = malloc(sizeof(char) * n_chars);
	if (!result)
	{
		ft_puterr("Memory allocation failed: exiting...\n");
		*bad_status = 1;
	}
	return (result);
}
