/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clkuznie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 18:32:42 by clkuznie          #+#    #+#             */
/*   Updated: 2019/06/15 18:32:44 by clkuznie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_power(int nb, int power)
{
	int		result;

	result = 1;
	while (power > 0)
	{
		if (power & 1)
			result *= nb;
		power = power >> 1;
		nb = nb * nb;
	}
	return (result);
}

int		check_value(int **tab, int i, int y)
{
	int		comparison_nb;

	comparison_nb = ft_power(2, tab[i][y]);
	if (tab[i][g_size + 2] & comparison_nb)
		return (0);
	if (tab[g_size + 2][y] & comparison_nb)
		return (0);
	return (comparison_nb);
}
