/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 10:20:21 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 19:15:44 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*create_suff_syntax(int base)
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

void	ft_solution_syntax(char *str, char *suffix, char *dico, int base)
{
	int print;

	print = 0;
	if (str[0] > '0')
		print = write_hundreds_syntax(dico, str, print);
	if (str[1] > '1')
		print = write_tens_syntax(dico, str + 1, print);
	if (str[2] > '0' && str[1] != '1')
		print = write_units_syntax(dico, str + 2, print);
	else if (str[1] == '1')
		print = write_teens_syntax(dico, str + 1, print);
	if (base > 0)
	{
		write(1, " ", 1);
		print_next_word(ft_find(dico, suffix, ft_strlen(suffix)));
	}
}

void	check_already_print(int print, int base, int i, char *str)
{
	if (print == 1 && base != 0)
		write(1, ", ", 2);
	else if (print == 1 && base == 0)
	{
		if (i == 3 && str[0] == '0' && str[1] == '0' && str[3] == '0')
			write(1, " and ", 5);
		else if (i == 3 && str[0] == '0' && str[1] == '0' && str[3] != '0')
			write(1, " ", 1);
		else
			write(1, ", ", 2);
	}
}

void	ft_find_base_syntax(char *str, char *dico)
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
			check_already_print(print, base, i, str);
			suffix = create_suff_syntax(base);
			ft_solution_syntax(str + i, suffix, dico, base);
			free(suffix);
			print = 1;
		}
		i = i + 3;
		base--;
	}
	free(dico);
}

void	ft_valid_syntax(char *str)
{
	char *dico;

	dico = ft_stock_dico(ft_size_dico());
	if (str[0] == '0' && str[1] == '0' && str[2] == '0')
		print_next_word(ft_find(dico, "0\0", 1));
	else
		ft_find_base_syntax(str, dico);
	write(1, "\n", 1);
}
