/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 10:20:21 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 19:45:57 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*create_suff(int base)
{
	char	*suffix;
	int		size;
	int		i;

	i = 0;
	size = 1 + 3 * base;
	suffix = (char*)malloc(sizeof(*suffix) * (size + 1));
	if (!suffix)
		return (NULL);
	suffix[i++] = '1';
	while (i < size)
	{
		suffix[i++] = '0';
	}
	suffix[i] = '\0';
	return (suffix);
}

void	ft_solution(char *str, char *suffix, char *dico, int base)
{
	int print;

	print = 0;
	if (str[0] > '0')
		print = write_hundreds(dico, str, print);
	if (str[1] > '1')
		print = write_tens(dico, str + 1, print);
	if (str[2] > '0' && str[1] != '1')
		print = write_units(dico, str + 2, print);
	else if (str[1] == '1')
		print = write_teens(dico, str + 1, print);
	if (base > 0)
	{
		write(1, " ", 1);
		print_next_word(ft_find(dico, suffix, ft_strlen(suffix)));
	}
}

void	ft_find_base(char *str, char *dico)
{
	int		i;
	int		base;
	char	*suffix;
	int		print;

	i = 0;
	base = ft_strlen(str) / 3 - 1;
	print = 0;
	while (base >= 0)
	{
		if (str[i] != '0' || str[i + 1] != '0' || str[i + 2] != '0')
		{
			if (print == 1)
				write(1, " ", 1);
			suffix = create_suff(base);
			ft_solution(str + i, suffix, dico, base);
			free(suffix);
			print = 1;
		}
		i = i + 3;
		base--;
	}
	free(dico);
}

void	ft_valid(char *str)
{
	char *dico;

	dico = ft_stock_dico(ft_size_dico());
	if (str[0] == '0' && str[1] == '0' && str[2] == '0')
		print_next_word(ft_find(dico, "0\0", 1));
	else
		ft_find_base(str, dico);
	write(1, "\n", 1);
}
