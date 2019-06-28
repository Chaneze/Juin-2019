/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 10:57:18 by charoua           #+#    #+#             */
/*   Updated: 2019/06/21 15:29:21 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (diff = s1[i] - s2[i]);
		i++;
	}
	return (diff);
}

int		main (int argc, char **argv)
{
	int i;

	i = 0;
	ft_advanced_sort_string_tab(argv, &ft_strcmp);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
