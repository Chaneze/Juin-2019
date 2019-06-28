/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 12:05:14 by charoua           #+#    #+#             */
/*   Updated: 2019/06/15 16:49:19 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <unistd.h>
# include <stdlib.h>

int		g_size;

int		size_cart(char *str);
int		check_arg(char *str);
int		check_value(int **tab, int i, int j);
int		**tab_init(char *str);
int		check_init(int **tab);
int		fill(int **tab, int i, int j);
int		u_check(int **tab, int y);
int		d_check(int **tab, int y);
int		l_check(int **tab, int i);
int		r_check(int **tab, int i);
int		check_tab(int **tab);
void	print_tab(int **tab);

#endif
