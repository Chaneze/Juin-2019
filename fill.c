/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clkuznie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 14:05:01 by clkuznie          #+#    #+#             */
/*   Updated: 2019/06/15 14:05:03 by clkuznie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		next(int **tab, int i, int j, int tmp)
{
	tab[i][g_size + 2] += tmp;
	tab[g_size + 2][j] += tmp;
	if (!(fill(tab, i, j + 1)))
		return (0);
	tab[i][g_size + 2] -= tmp;
	tab[g_size + 2][j] -= tmp;
	return (1);
}

int		skip(int **tab, int i, int j)
{
	if (j < g_size)
	{
		if (!(fill(tab, i, j + 1)))
			return (0);
	}
	else if (i < g_size && l_check(tab, i) && r_check(tab, i))
	{
		if (!(fill(tab, i + 1, 1)))
			return (0);
	}
	else if (i == g_size && check_tab(tab))
	{
		print_tab(tab);
		return (0);
	}
	return (1);
}

int		try_values(int **tab, int i, int j, int value)
{
	while (++value < g_size + 1)
	{
		if ((tab[i][j] = value) && check_value(tab, i, j))
		{
			if (j < g_size)
			{
				if (!(next(tab, i, j, check_value(tab, i, j))))
					return (0);
			}
			else if (i < g_size && l_check(tab, i) && r_check(tab, i))
			{
				if (!(fill(tab, i + 1, 1)))
					return (0);
			}
			else if (i == g_size && check_tab(tab))
			{
				print_tab(tab);
				return (0);
			}
		}
		tab[i][j] = 0;
	}
	return (value);
}

int		fill(int **tab, int i, int j)
{
	int		value;

	if (tab[i][j] != 0)
	{
		if (!(skip(tab, i, j)))
			return (0);
	}
	else
	{
		value = 0;
		if (!(value = try_values(tab, i, j, value)))
			return (0);
		if (i == 1 && j == 1 && value == g_size + 1)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}
