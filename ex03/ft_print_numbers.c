/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:32:39 by charoua           #+#    #+#             */
/*   Updated: 2019/06/04 17:45:15 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	c = '0';
	while (i < 10)
	{
		write(1, &c, 1);
		i++;
		c++;
	}
}
