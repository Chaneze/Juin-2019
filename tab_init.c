/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clkuznie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 10:29:08 by clkuznie          #+#    #+#             */
/*   Updated: 2019/06/15 16:51:07 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	fil_col(int **tab, int i, int j)
{
	int k;

	k = 1;
	if (i == 0)
	{
		while (i < g_size)
		{
			tab[i + 1][j] = k;
			k++;
			i++;
		}
		i = 0;
	}
	if (i == g_size + 1)
	{
		while (i > 1)
		{
			tab[i - 1][j] = k;
			k++;
			i--;
		}
	}
}

void	place_col(int **tab, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < g_size + 2)
	{
		j = 1;
		while (j < g_size + 1)
		{
			tab[i][j] = str[k] - '0';
			if (str[k] == '0' + g_size)
				fil_col(tab, i, j);
			if (str[k] == '1' && i == 0)
				tab[i + 1][j] = g_size;
			if (str[k] == '1' && i == g_size + 1)
				tab[i - 1][j] = g_size;
			k = k + 2;
			j++;
		}
		i = i + g_size + 1;
	}
}

void	fil_line(int **tab, int i, int j)
{
	int k;

	k = 1;
	if (j == 0)
	{
		while (j < g_size)
		{
			tab[i][j + 1] = k;
			k++;
			j++;
		}
		j = 0;
	}
	if (j == g_size + 1)
	{
		while (j > 1)
		{
			tab[i][j - 1] = k;
			k++;
			j--;
		}
	}
}

void	place_line(int **tab, char *str)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 2 * 2 * g_size;
	while (j < g_size + 2)
	{
		i = 1;
		while (i < g_size + 1)
		{
			tab[i][j] = str[k] - '0';
			if (str[k] == '0' + g_size)
				fil_line(tab, i, j);
			if (str[k] == '1' && j == 0)
				tab[i][j + 1] = g_size;
			if (str[k] == '1' && j == g_size + 1)
				tab[i][j - 1] = g_size;
			k = k + 2;
			i++;
		}
		j = j + g_size + 1;
	}
}

int		**tab_init(char *str)
{
	int **tab;
	int i;
	int j;

	i = 0;
	if (!(tab = (int **)malloc(sizeof(tab) * (g_size + 3))))
		return (0);
	while (i < g_size + 3)
	{
		j = 0;
		if (!(tab[i] = (int *)malloc(sizeof(*tab) * (g_size + 3))))
			return (0);
		while (j < g_size + 3)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	place_col(tab, str);
	place_line(tab, str);
	return (tab);
}
