/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:15:01 by charoua           #+#    #+#             */
/*   Updated: 2019/06/06 09:17:50 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		write(1, &c, 1);
		i++;
		c++;
	}
}
