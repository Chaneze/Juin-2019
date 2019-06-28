/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:06:08 by charoua           #+#    #+#             */
/*   Updated: 2019/06/26 18:06:52 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_size_map(char *file)
{
	int		fd;
	int		ret;
	int		size;
	char	c;

	size = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	else
	{
		while ((ret = read(fd, &c, 1)))
		{
			if (ret < 0)
				return (0);
			size = size + ret;
		}
		close(fd);
	}
	return (size);
}

char	*ft_stock_map(int size, char *file)
{
	int		fd;
	int		ret;
	char	*buf;

	if (size > 0)
	{
		buf = (char*)malloc(sizeof(*buf) * (size + 1));
		if (!buf)
			return (NULL);
		fd = open(file, O_RDONLY);
		if (fd == -1)
			return (NULL);
		else
		{
			ret = read(fd, buf, size);
			if (ret < 0)
				return (NULL);
			buf[ret] = '\0';
			close(fd);
			return (buf);
		}
	}
	return (NULL);
}
