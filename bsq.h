/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:15:36 by charoua           #+#    #+#             */
/*   Updated: 2019/06/26 20:55:35 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# define BUF_SIZE 10000

typedef struct	s_map
{
	int		col;
	int		line;
	int		cur_line;
	int		square;
	int		pos;
	char	*car;
	int		*tab;
}				t_map;

void			ft_arg(char *argv, char *str, t_map *map, int pos);
int				ft_strlen(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
char			*ft_realloc(char *s, char *buf);
char			*ft_read_screen(void);
void			ft_no_arg(char *str, t_map *map, int pos);
int				ft_size_map(char *file);
char			*ft_stock_map(int size, char *file);
int				ft_check_map(char *str, t_map *map);
int				ft_check_param(char *str, t_map *map);
void			ft_col(char *str, t_map *map);
int				ft_check_line(char *str, t_map *map, int i);
int				ft_first_line(char *str, t_map *map, int i);
int				ft_middle_line(char *str, t_map *map, int i, int j);
int				ft_last_line(char *str, t_map *map, int i, int j);
void			ft_max(t_map *map, int pos);
int				ft_search(int *map, int line, int col);
int				min(t_map *map, int a, int b, int c);
int				ft_char_to_int(char *str, t_map *map);
void			ft_solution(t_map *map);
void			ft_print(t_map *map);

#endif
