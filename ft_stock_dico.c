/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_dico.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:13:56 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 19:43:42 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_size_dico(void)
{
	int		fd;
	int		ret;
	int		size;
	char	c[1];

	size = 0;
	c[0] = '\0';
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		write(2, "Cannot read file.\n", 18);
	else
	{
		while ((ret = read(fd, c, 1)))
			size = size + ret;
		close(fd);
	}
	return (size);
}

char	*ft_stock_dico(int size)
{
	int		fd;
	int		ret;
	char	*buf;

	buf = (char*)malloc(sizeof(*buf) * (size + 1));
	if (!buf)
		return (NULL);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		write(2, "Cannot read file.\n", 18);
	else
	{
		ret = read(fd, buf, size);
		buf[ret] = '\0';
		close(fd);
	}
	return (buf);
}
