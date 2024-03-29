/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:00:00 by charoua           #+#    #+#             */
/*   Updated: 2019/06/11 10:12:57 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;
	int j;

	x = 1;
	j = nb;
	if (j > 1 && j < 13)
	{
		while (x < j)
		{
			nb = nb * x;
			x++;
		}
		return (nb);
	}
	if (j == 0 || j == 1)
		return (1);
	else
		return (0);
}
