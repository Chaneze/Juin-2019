/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:33:34 by charoua           #+#    #+#             */
/*   Updated: 2019/06/26 18:13:19 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_check_param(char *str, t_map *map)
{
	int i;
	int j;

	i = 0;
	map->line = 0;
	if (str[i] != '\0' && str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		map->line = map->line * 10 + str[i] - '0';
		i++;
	}
	j = 0;
	while (str[i + j] != '\0' && str[i + j] != '\n')
	{
		map->car[j] = str[i + j];
		j++;
	}
	map->car[j] = '\0';
	if (j == 3 && map->line > 0 && str[i + j] == '\n')
		return (i + j + 1);
	return (0);
}

int		ft_check_line(char *str, t_map *map, int i)
{
	if (ft_first_line(str, map, i) > 0)
	{
		map->cur_line++;
		i = i + map->col + 1;
		while (map->cur_line < map->line - 1)
		{
			if (ft_middle_line(str, map, i, map->col) == 0)
				return (0);
			map->cur_line++;
			i = i + map->col + 1;
		}
		if (map->line > 1 && ft_last_line(str, map, i, map->col) == 0)
			return (0);
	}
	return (1);
}

void	ft_col(char *str, t_map *map)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	map->col = i;
}

int		ft_check_map(char *str, t_map *map)
{
	int	pos;

	map->square = 0;
	map->pos = 0;
	map->cur_line = 0;
	if (!(map->car = (char *)malloc(sizeof(char) * 4)))
		return (0);
	if ((pos = ft_check_param(str, map)) > 0)
	{
		ft_col(str + pos, map);
		if (!(map->tab = malloc(sizeof(int) * map->line * (map->col + 1))))
			return (0);
		if (ft_check_line(str + pos, map, 0) > 0)
			return (pos);
	}
	return (0);
}
