/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:46:09 by charoua           #+#    #+#             */
/*   Updated: 2019/06/20 10:59:10 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_string_tab(char **tab);

#include <stdio.h>

int		main (int argc, char **argv)
{
	int i;

	i = 0;
	ft_sort_string_tab(argv);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
