/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 17:58:30 by charoua           #+#    #+#             */
/*   Updated: 2019/06/26 18:12:12 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_first_line(char *str, t_map *map, int i)
{
	int first;

	first = 0;
	while (i < (map->col + 1))
	{
		if (str[i] == map->car[0])
		{
			if (first == 0)
			{
				first = 1;
				map->pos = i;
				map->square = 1;
			}
			map->tab[i] = 1;
		}
		else if (str[i] == map->car[1])
			map->tab[i] = 0;
		else if (str[i] == '\n' && i == map->col)
			map->tab[i] = -1;
		else
			return (0);
		i++;
	}
	return (1);
}

int		ft_middle_line(char *str, t_map *map, int i, int j)
{
	int	k;

	k = 0;
	while (k < (map->col + 1))
	{
		if (str[i + k] == map->car[0] && ((k % (map->col + 1)) == 0))
			map->tab[i + k] = 1;
		else if (str[i + k] == map->car[0] && ((k % (map->col + 1)) != 0))
		{
			map->tab[i + k] = min(map, i + k - 1, i + k - j - 1, i + k - j - 2);
			if (map->tab[i + k] > map->square)
				ft_max(map, i + k);
		}
		else if (str[i + k] == map->car[1])
			map->tab[i + k] = 0;
		else if (str[i + k] == '\n' && k == map->col)
			map->tab[i + k] = -1;
		else
			return (0);
		k++;
	}
	return (1);
}

int		ft_last_line(char *str, t_map *map, int i, int j)
{
	int k;

	k = 0;
	while (k < (map->col + 1))
	{
		if (str[i + k] == map->car[0] && ((k % (map->col + 1)) == 0))
			map->tab[i + k] = 1;
		else if (str[i + k] == map->car[0] && ((k % (map->col + 1)) != 0))
		{
			map->tab[i + k] = min(map, i + k - 1, i + k - j - 1, i + k - j - 2);
			if (map->tab[i + k] > map->square)
				ft_max(map, i + k);
		}
		else if (str[i + k] == map->car[1])
			map->tab[i + k] = 0;
		else if (str[i + k] == '\n' && k == map->col)
			map->tab[i + k] = -1;
		else
			return (0);
		k++;
	}
	if (str[i + k] != '\0')
		return (0);
	return (1);
}
