/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 11:10:02 by charoua           #+#    #+#             */
/*   Updated: 2019/06/24 09:48:58 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

void	ft_check_file(char *prog, char *file);
void	ft_empty(void);
void	ft_cat_normal(int fd, char *prog, char *file);
void	ft_putstr(char *str);
void	ft_putstr_error(char *str);

#endif
