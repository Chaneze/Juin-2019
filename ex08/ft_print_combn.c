/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:08:45 by charoua           #+#    #+#             */
/*   Updated: 2019/06/08 17:08:37 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_combn(int i, int n, int pos, char *str)
{
	while (i <= (10 - n + pos))
	{
		str[pos] = '0' + i;
		if (pos == n - 1)
		{
			ft_print(str);
			if (str[0] != ('9' + 1 - n))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (pos + 1 < n)
			ft_combn(i + 1, n, pos + 1, str);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		pos;
	char	tab[10];

	i = 0;
	pos = 0;
	if (n > 0 && n < 10)
	{
		while (i < 10)
		{
			tab[i] = '.';
			i++;
		}
		tab[n] = '\0';
		i = 0;
		ft_combn(i, n, pos, tab);
	}
}
