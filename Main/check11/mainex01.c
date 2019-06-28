/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:08:17 by charoua           #+#    #+#             */
/*   Updated: 2019/06/19 16:50:44 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

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

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb >= 2)
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}

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
	tab = ft_map(tab, 10, &ft_is_prime);
	while (i < 10)
	{
		printf("%d en pour i vaut %d\n", tab[i], min);
		min++;
		i++;
	}
	return (0);
}
