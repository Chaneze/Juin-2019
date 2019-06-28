/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 18:34:25 by charoua           #+#    #+#             */
/*   Updated: 2019/06/20 11:29:23 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

typedef int		(*t_doop)(int, int);

typedef struct	s_opp
{
	char		operateur;
	t_doop		ft;
}				t_opp;

int				ft_atoi(char *str);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_div_error(void);
int				ft_mod_error(void);
void			ft_putchar(char c);
void			ft_putnbr(int nb);

#endif
