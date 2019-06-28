/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 11:30:01 by charoua           #+#    #+#             */
/*   Updated: 2019/06/13 19:06:42 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int		main(void)
{
	int i;
	int min;
	int max;
	int *tab;

	i = 0;
	min = 5;
	max = 15;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
