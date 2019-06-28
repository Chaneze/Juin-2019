/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:46:07 by charoua           #+#    #+#             */
/*   Updated: 2019/06/07 15:46:59 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putascii(char c)
{
	if (c > 31 && c < 127)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	ft_char_hexa(char c)
{
	char *hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_content_hexa(char *str, unsigned int start, unsigned int max)
{
	unsigned int i;

	i = start;
	while (i < start + 16 && i < max)
	{
		ft_char_hexa(str[i]);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < start + 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	i = start;
	while (i < start + 16 && i < max)
	{
		ft_putascii(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_address_hexa(unsigned long nb, int size)
{
	char *hex;

	hex = "0123456789abcdef";
	if (nb < 16)
	{
		while (size < 15 - 1)
		{
			write(1, "0", 1);
			size++;
		}
		write(1, &hex[nb], 1);
	}
	else if (nb >= 16)
	{
		ft_address_hexa(nb / 16, size + 1);
		write(1, &hex[nb % 16], 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	c;
	unsigned long	j;

	str = (char *)addr;
	c = 0;
	while (c < size)
	{
		j = (unsigned long)&str[c];
		ft_address_hexa(j, 0);
		write(1, ": ", 2);
		ft_content_hexa(str, c, size);
		c += 16;
	}
	return (addr);
}
