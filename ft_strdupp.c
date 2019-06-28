/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:50:06 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 16:01:35 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_len(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] == '0')
	{
		i++;
		j++;
	}
	while (str[i] != '\0')
		i++;
	if (i == j && str[0] != '\0')
		i++;
	return (i - j);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdupp(char *src)
{
	int		i;
	int		length;
	int		length_src;
	char	*dest;

	i = 0;
	length = ft_len(src);
	if (length % 3 != 0)
		length = length + (3 - length % 3);
	length_src = ft_strlen(src);
	dest = (char*)malloc(sizeof(*dest) * (length + 1));
	if (!dest)
		return (NULL);
	dest[length--] = '\0';
	length_src--;
	while (length >= 0 && length_src >= 0)
		dest[length--] = src[length_src--];
	while (length >= 0)
		dest[length--] = '0';
	return (dest);
}
