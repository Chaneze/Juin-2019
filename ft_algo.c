/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:58:27 by charoua           #+#    #+#             */
/*   Updated: 2019/06/26 18:58:30 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		min(t_map *map, int a, int b, int c)
{
	if (map->tab[a] <= map->tab[b] && map->tab[a] <= map->tab[c])
		return (map->tab[a] + 1);
	else if (map->tab[b] <= map->tab[a] && map->tab[b] <= map->tab[c])
		return (map->tab[b] + 1);
	else
		return (map->tab[c] + 1);
}

void	ft_max(t_map *map, int pos)
{
	map->square = map->tab[pos];
	map->pos = pos;
}
