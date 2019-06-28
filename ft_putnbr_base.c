/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:00:20 by charoua           #+#    #+#             */
/*   Updated: 2019/06/13 14:27:57 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *base)
{
	int i;
	int j;
	int size_b;

	i = 0;
	size_b = 0;
	while (base[size_b] != '\0')
	{
		if (base[size_b] == '+' || base[size_b] == '-' || \
				base[size_b] <= 32 || base[size_b] > 126)
			return (0);
		size_b++;
	}
	while (i < size_b - 1)
	{
		j = i + 1;
		while (j < size_b)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (size_b);
}

void	ft_base(long nb, int size, char *base)
{
	if (nb >= size)
	{
		ft_base(nb / size, size, base);
		ft_base(nb % size, size, base);
	}
	else
		ft_putchar(base[nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_b;
	long	nb;

	size_b = ft_check_base(base);
	nb = nbr;
	if (size_b > 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		ft_base(nb, size_b, base);
	}
}
