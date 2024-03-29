/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 12:53:11 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 17:15:20 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list			*ft_create_elem(void *data);
void			ft_list_push_front(t_list **begin_list, void *data);
int				ft_list_size(t_list *begin_list);
t_list			*ft_list_last(t_list *begin_list);
void			ft_list_push_back(t_list **begin_list, void *data);
t_list			*ft_list_push_strs(int size, char **strs);
void			ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list			*ft_list_at(t_list *begin_list, unsigned int nbr);
void			ft_list_reverse(t_list **begin_list);
void			ft_list_foreach(t_list *begin_list, void (*f)(void *));
t_list			*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void			ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void			ft_list_sort(t_list **begin_list, int (*cmp)());
void			ft_list_reverse_fun(t_list *begin_list);
void			ft_sorted_list_merge(t_list **begin_list1,
				t_list *begin_list2, int (*cmp)());

#endif
