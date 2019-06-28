/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 11:20:49 by charoua           #+#    #+#             */
/*   Updated: 2019/06/15 17:40:19 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		size_cart(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if ((i + 1) % 2 != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = (i + 1) / 2;
	if (i % 4 != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	g_size = i / 4;
	if (g_size < 3 || g_size > 9)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (g_size);
}
