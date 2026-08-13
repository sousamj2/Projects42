/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 18:53:05 by mpankrat          #+#    #+#             */
/*   Updated: 2026/08/13 16:46:06 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_POINT_H 
# define FT_POINT_H

typedef struct set_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);
#endif
