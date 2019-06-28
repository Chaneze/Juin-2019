/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:14:41 by charoua           #+#    #+#             */
/*   Updated: 2019/06/06 17:17:52 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_str_is_uppercase(argv[1]));
	return (0);
}
