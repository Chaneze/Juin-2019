/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:31:34 by rturcey           #+#    #+#             */
/*   Updated: 2019/06/09 11:27:57 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char first, char middle, char last)
{
	if (x > 0)
	{
		ft_putchar(first);
		while (x > 2)
		{
			ft_putchar(middle);
			x--;
		}
		if (x > 1)
		{
			ft_putchar(last);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y > 0)
	{
		print_line(x, 'A', 'B', 'C');
	}
	while (y > 2)
	{
		print_line(x, 'B', ' ', 'B');
		y--;
	}
	if (y > 1)
	{
		print_line(x, 'C', 'B', 'A');
	}
}
