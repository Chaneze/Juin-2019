/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:00:20 by charoua           #+#    #+#             */
/*   Updated: 2019/06/11 11:08:39 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(int argc, char **argv)
{
	int i;
	(void)argc;

	i = -2147483648;
	ft_putnbr_base(i, argv[1]);
	return (0);
}
