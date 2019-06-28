/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:46:52 by charoua           #+#    #+#             */
/*   Updated: 2019/06/19 17:57:23 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int		ft_sup(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int i;
	int min;
	int max;
	int *tab;

	min = 5;
	max = 15;
	tab = ft_range(min, max);
	printf("%d\n", ft_is_sort(tab, 10, &ft_sup));
	return (0);
}
