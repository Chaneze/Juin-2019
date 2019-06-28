/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 18:52:30 by charoua           #+#    #+#             */
/*   Updated: 2019/06/24 09:45:21 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_print_error(char *prog, char *file)
{
	ft_putstr_error(basename(prog));
	ft_putstr_error(": ");
	ft_putstr_error(file);
	ft_putstr_error(": ");
	ft_putstr_error(strerror(errno));
	ft_putstr_error("\n");
}

void	ft_cat_normal(int fd, char *prog, char *file)
{
	char	c;
	int		ret;

	errno = 0;
	while ((ret = read(fd, &c, 1)))
	{
		if (ret == -1)
		{
			ft_print_error(prog, file);
			return ;
		}
		write(1, &c, 1);
	}
}

void	ft_empty(void)
{
	char	c;

	while (read(0, &c, 1))
	{
		write(1, &c, 1);
	}
}

void	ft_check_file(char *prog, char *file)
{
	int	fd;

	errno = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		if (file[0] == '-' && file[1] == '\0')
			ft_empty();
		else
		{
			ft_print_error(prog, file);
		}
	}
	else
	{
		ft_cat_normal(fd, prog, file);
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_empty();
	else
	{
		while (i < argc)
		{
			ft_check_file(argv[0], argv[i]);
			i++;
		}
	}
	return (0);
}
