/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inc_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xjose <xjose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:56:53 by xjose             #+#    #+#             */
/*   Updated: 2024/07/13 21:40:52 by xjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	ft_inc_map(t_map map, enum e_postion postion, bool animation)
{
	t_point	point;
	t_point	ps;
	t_size	size;
	int		idx;
	int		i;

	idx = 0;
	size = ft_get_size_map(map.map);
	size.width *= map.igw;
	size.height *= map.igh;
	ps = ft_postion(map.win, size, postion);
	point.y = ps.y;
	while (*map.map)
	{
		i = 0;
		point.x = ps.x;
		ft_print_map(*map.map, map, point, animation);
		map.map++;
		point.y += map.igh + 2;
	}
}
