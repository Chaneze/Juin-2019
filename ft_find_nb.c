/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:44:00 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 19:43:19 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_next_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == ':')
		i++;
	while (str[i] != '\0' && str[i] != '\n' && str[i] >= 32 && str[i] <= 126)
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_find(char *str, char *to_find, int size)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < size && str[i + j] != '\0' && to_find[j] != '\0' && \
				str[i + j] == to_find[j])
			j++;
		if (j == size && (str[i + j] == ' ' || str[i + j] == ':'))
		{
			if (i == 0 || (i > 0 && str[i - 1] == '\n'))
				return (str + i + j + 1);
		}
		i++;
	}
	return (0);
}
