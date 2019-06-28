/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:45:32 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 18:58:55 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 1;
	if (argc == 1)
	{
		write(2, "Write a number or leave by taping 'q' and enter.\n", 49);
		ft_no_arg();
	}
	else
	{
		while (i < argc)
		{
			str = check_arg(argv[i]);
			if (!str || ft_strlen(str) > 39)
				write(2, "Error\n", 6);
			else
				ft_valid_syntax(str);
			i++;
			free(str);
		}
	}
	return (0);
}
