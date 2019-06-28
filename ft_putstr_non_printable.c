/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 19:17:24 by charoua           #+#    #+#             */
/*   Updated: 2019/06/10 17:45:00 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[np / 16]);
	ft_putchar(hex[np % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int j;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			ft_putchar('\\');
			j = (int)str[i];
			if (j < 0)
			{
				j = j + 256;
			}
			ft_hexa(j);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
