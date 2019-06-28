/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:47:21 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 16:02:41 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*check_arg(char *str)
{
	int i;
	int j;
	int sign;

	i = 0;
	j = 0;
	sign = 0;
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			return (NULL);
		sign = 1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != '\0')
		return (NULL);
	if (sign == 1)
		return (ft_strdupp(str + 1));
	else
		return (ft_strdupp(str));
}
