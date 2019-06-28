/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:56:42 by charoua           #+#    #+#             */
/*   Updated: 2019/06/26 21:05:59 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_no_arg(char *str, t_map *map, int pos)
{
	str = ft_read_screen();
	if (str)
	{
		map = (t_map *)malloc(sizeof(t_map));
		if (!map)
			return ;
		if ((pos = ft_check_map(str, map)) > 0)
		{
			free(str);
			ft_solution(map);
			ft_print(map);
			free(map->tab);
			free(map->car);
			free(map);
		}
		else
			write(2, "map error\n", 10);
	}
	else
		write(2, "map error\n", 10);
}

void	ft_arg(char *argv, char *str, t_map *map, int pos)
{
	str = ft_stock_map(ft_size_map(argv), argv);
	if (str)
	{
		map = (t_map *)malloc(sizeof(t_map));
		if (!map)
			return ;
		if ((pos = ft_check_map(str, map)) > 0)
		{
			free(str);
			ft_solution(map);
			ft_print(map);
			free(map->tab);
			free(map->car);
			free(map);
		}
		else
			write(2, "map error\n", 10);
	}
	else
		write(2, "map error\n", 10);
}
