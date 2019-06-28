/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 18:33:01 by charoua           #+#    #+#             */
/*   Updated: 2019/06/20 11:26:26 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

t_opp	g_opp[5] =
{
	{'+', &ft_add},
	{'-', &ft_sub},
	{'*', &ft_mul},
	{'/', &ft_div},
	{'%', &ft_mod},
};

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc != 4)
		return (0);
	i = 0;
	c = argv[2][0];
	if (c == '/' && ft_atoi(argv[3]) == 0)
		return (ft_div_error());
	if (c == '%' && ft_atoi(argv[3]) == 0)
		return (ft_mod_error());
	while (i < 5)
	{
		if (g_opp[i].operateur == c)
		{
			ft_putnbr(g_opp[i].ft(ft_atoi(argv[1]), ft_atoi(argv[3])));
			write(1, "\n", 1);
			return (1);
		}
		i++;
	}
	write(1, "0\n", 2);
	return (-1);
}
