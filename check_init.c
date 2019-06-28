/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clkuznie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 12:16:41 by clkuznie          #+#    #+#             */
/*   Updated: 2019/06/16 12:16:43 by clkuznie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		check_init(int **tab)
{
	int		i;
	int		j;
	int		tmp;

	i = 1;
	while (i < g_size + 1)
	{
		j = 1;
		while (j < g_size + 1)
		{
			if (tab[i][j] != 0)
			{
				if (!(tmp = check_value(tab, i, j)))
					return (0);
				tab[i][g_size + 2] += tmp;
				tab[g_size + 2][j] += tmp;
			}
			j++;
		}
		i++;
	}
	return (1);
}
