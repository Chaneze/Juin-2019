/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebetta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 19:18:05 by tebetta           #+#    #+#             */
/*   Updated: 2019/06/26 19:19:32 by tebetta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_solution(t_map *map)
{
	int	i;
	int	j;

	i = map->pos - (map->square - 1) * (map->col + 1) - map->square + 1;
	while (i <= map->pos)
	{
		j = 0;
		while (j < map->square)
		{
			map->tab[i] = -2;
			i++;
			j++;
		}
		i = i - map->square + map->col + 1;
	}
}

void	ft_print(t_map *map)
{
	int	i;

	i = 0;
	while (i < (map->line * (map->col + 1)))
	{
		if (map->tab[i] > 0)
			write(1, &map->car[0], 1);
		else if (map->tab[i] == 0)
			write(1, &map->car[1], 1);
		else if (map->tab[i] == -2)
			write(1, &map->car[2], 1);
		else if (map->tab[i] == -1)
			write(1, "\n", 1);
		i++;
	}
}
