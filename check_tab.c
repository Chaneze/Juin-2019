/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clkuznie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 11:54:21 by clkuznie          #+#    #+#             */
/*   Updated: 2019/06/15 11:54:23 by clkuznie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		u_check(int **tab, int j)
{
	int		i;
	int		count;
	int		highest;

	i = 1;
	count = 0;
	highest = tab[i][j];
	while (i < g_size + 1 && highest < g_size)
	{
		if (tab[i][j] > highest)
		{
			highest = tab[i][j];
			count++;
		}
		i++;
	}
	if (count + 1 == tab[0][j])
		return (1);
	return (0);
}

int		d_check(int **tab, int j)
{
	int		i;
	int		count;
	int		highest;

	i = g_size;
	count = 0;
	highest = tab[i][j];
	while (i > 0 && highest < g_size)
	{
		if (tab[i][j] > highest)
		{
			highest = tab[i][j];
			count++;
		}
		i--;
	}
	if (count + 1 == tab[g_size + 1][j])
		return (1);
	return (0);
}

int		l_check(int **tab, int i)
{
	int		j;
	int		count;
	int		highest;

	j = 1;
	count = 0;
	highest = tab[i][j];
	while (j < g_size + 1 && highest < g_size)
	{
		if (tab[i][j] > highest)
		{
			highest = tab[i][j];
			count++;
		}
		j++;
	}
	if (count + 1 == tab[i][0])
		return (1);
	return (0);
}

int		r_check(int **tab, int i)
{
	int		j;
	int		count;
	int		highest;

	j = g_size;
	count = 0;
	highest = tab[i][j];
	while (j > 0 && highest < g_size)
	{
		if (tab[i][j] > highest)
		{
			highest = tab[i][j];
			count++;
		}
		j--;
	}
	if (count + 1 == tab[i][g_size + 1])
		return (1);
	return (0);
}

int		check_tab(int **tab)
{
	int		i;

	i = 1;
	while (i < g_size + 1)
	{
		if (u_check(tab, i) == 0)
			return (0);
		if (d_check(tab, i) == 0)
			return (0);
		if (l_check(tab, i) == 0)
			return (0);
		if (r_check(tab, i) == 0)
			return (0);
		i++;
	}
	return (1);
}
