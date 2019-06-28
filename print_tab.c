/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 16:45:22 by charoua           #+#    #+#             */
/*   Updated: 2019/06/15 16:51:32 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(int **tab)
{
	int i;
	int j;

	i = 1;
	while (i < g_size + 1)
	{
		j = 1;
		while (j < g_size + 1)
		{
			ft_putchar(tab[i][j] + '0');
			if (j < g_size)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
