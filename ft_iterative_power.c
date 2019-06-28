/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:21:29 by charoua           #+#    #+#             */
/*   Updated: 2019/06/11 12:12:02 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	x;
	int	j;

	x = 1;
	j = nb;
	if (power > 0)
	{
		while (x < power)
		{
			nb = nb * j;
			x++;
		}
		return (nb);
	}
	if (power == 0)
		return (1);
	else
		return (0);
}
