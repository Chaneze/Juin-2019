/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:25:55 by charoua           #+#    #+#             */
/*   Updated: 2019/06/13 19:26:59 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tmp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tmp = (int*)malloc(sizeof(*tmp) * (max - min));
	if (!tmp)
		return (-1);
	i = 0;
	while (min < max)
	{
		tmp[i] = min;
		i++;
		min++;
	}
	*range = tmp;
	return (i);
}
