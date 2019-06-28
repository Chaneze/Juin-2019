/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_solution.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 10:24:09 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 19:42:50 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	write_hundreds(char *dico, char *num, int print)
{
	if (print == 1)
		write(1, " ", 1);
	print_next_word(ft_find(dico, num, 1));
	write(1, " ", 1);
	print_next_word(ft_find(dico, "100\0", 3));
	return (1);
}

int	write_tens(char *dico, char *num, int print)
{
	char *tens;

	if (print == 1)
		write(1, " ", 1);
	tens = (char*)malloc(sizeof(*tens) * (2 + 1));
	if (tens)
	{
		tens[0] = num[0];
		tens[1] = '0';
		tens[2] = '\0';
		print_next_word(ft_find(dico, tens, 2));
		free(tens);
	}
	return (1);
}

int	write_units(char *dico, char *num, int print)
{
	if (print == 1)
		write(1, " ", 1);
	print_next_word(ft_find(dico, num, 1));
	return (1);
}

int	write_teens(char *dico, char *num, int print)
{
	if (print == 1)
		write(1, " ", 1);
	print_next_word(ft_find(dico, num, 2));
	return (1);
}
