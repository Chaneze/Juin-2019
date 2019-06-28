/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:46:52 by charoua           #+#    #+#             */
/*   Updated: 2019/06/19 17:56:48 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int increase;
	int decrease;

	i = 0;
	increase = 1;
	decrease = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			decrease = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			increase = 0;
		i++;
	}
	if (increase == 1 || decrease == 1)
		return (1);
	else
		return (0);
}
