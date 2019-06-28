/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:24:53 by charoua           #+#    #+#             */
/*   Updated: 2019/06/16 14:47:48 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_length(int size, char **strs, char *sep)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + (size - 1) * ft_strlen(sep);
	return (length);
}

int		ft_concat(int pos, char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[pos] = src[i];
		pos++;
		i++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*new;

	i = 0;
	k = 0;
	if (size == 0)
	{
		if (!(new = (char *)malloc(sizeof(*new) * 1)))
			return (0);
	}
	else
	{
		if (!(new = malloc(sizeof(*new) * (ft_length(size, strs, sep) + 1))))
			return (0);
		while (i < size)
		{
			k = ft_concat(k, new, strs[i]);
			if (i < size - 1)
				k = ft_concat(k, new, sep);
			i++;
		}
	}
	new[k] = '\0';
	return (new);
}
