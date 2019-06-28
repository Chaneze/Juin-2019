/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:43:45 by charoua           #+#    #+#             */
/*   Updated: 2019/06/24 09:48:17 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	c;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		write(2, "Cannot read file.\n", 18);
	else
	{
		while ((ret = read(fd, &c, 1)))
		{
			if (ret < 0)
			{
				write(2, "Cannot read file.\n", 18);
				return ;
			}
			write(1, &c, 1);
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
