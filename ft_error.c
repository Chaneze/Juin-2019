/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 18:39:35 by charoua           #+#    #+#             */
/*   Updated: 2019/06/19 19:28:24 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_div_error(void)
{
	write(1, "Stop : division by zero\n", 24);
	return (-1);
}

int		ft_mod_error(void)
{
	write(1, "Stop : modulo by zero\n", 22);
	return (-1);
}
