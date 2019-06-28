/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:04:53 by charoua           #+#    #+#             */
/*   Updated: 2019/06/17 12:11:14 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i;
	int min;
	int max;
	int *tab[100];

	i = 0;
	min = 5;
	max = 15;
	printf("%d\n", ft_ultimate_range(tab, min, max));
	while (i < max - min)
	{
		printf("%d\n", tab[0][i]);
		i++;
	}
	return (0);
}
