/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:34:02 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 19:15:07 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 32000

char	*ft_stock_dico(int size);
int		ft_size_dico(void);
void	ft_no_arg(void);
char	*check_arg(char *str);
char	*ft_clean(char *str);
char	*ft_strdupp(char *src);
int		ft_strlen(char *str);
int		ft_len(char *str);
void	ft_valid(char *str);
void	ft_valid_syntax(char *str);
char	*create_suff(int base);
char	*create_suff_syntax(int base);
void	ft_find_base(char *str);
void	ft_find_base_syntax(char *str, char *dico);
void	ft_solution(char *str, char *suffix, char *dico, int base);
void	ft_solution_syntax(char *str, char *suffix, char *dico, int base);
char	*ft_find(char *str, char *to_find, int size);
void	print_next_word(char *str);
int		write_hundreds_syntax(char *dico, char *num, int print);
int		write_tens_syntax(char *dico, char *num, int print);
int		write_units_syntax(char *dico, char *num, int print);
int		write_teens_syntax(char *dico, char *num, int print);

#endif
