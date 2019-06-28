/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_sreen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebetta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 19:19:48 by tebetta           #+#    #+#             */
/*   Updated: 2019/06/26 19:21:41 by tebetta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_realloc(char *s, char *buf)
{
	char	*res;

	if (!(res = malloc(sizeof(char) * (ft_strlen(s) + ft_strlen(buf) + 1))))
		return (0);
	res = ft_strcpy(res, s);
	free(s);
	res = ft_strcat(res, buf);
	return (res);
}

char	*ft_read_screen(void)
{
	int		size;
	char	*buff;
	char	*container;

	if (!(buff = malloc(sizeof(char) * BUF_SIZE)))
		return (NULL);
	if (!(container = malloc(sizeof(char) * BUF_SIZE)))
		return (NULL);
	size = 0;
	while ((size = read(0, buff, BUF_SIZE - 1)) > 0)
	{
		buff[size] = 0;
		if (!(container = ft_realloc(container, buff)))
			return (NULL);
	}
	free(buff);
	return (container);
}
