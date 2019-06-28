/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:22:37 by charoua           #+#    #+#             */
/*   Updated: 2019/06/17 12:22:05 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);

int		main(int argc, char **argv)
{
	char **split;
	int i;
	int j;

	(void)argc;
	i = 0;
	split = ft_split(argv[1], argv[2]);
	while (split[i] != NULL)
	{
		j = 0;
		while (split[i][j] != '\0')
		{
			write(1, &split[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
