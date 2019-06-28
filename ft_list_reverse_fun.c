/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 08:05:20 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 08:33:12 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*length;
	int		i;

	i = 0;
	length = begin_list;
	while (length)
	{
		length = length->next;
		i++;
	}
	return (i);
}

void	ft_swap_list(t_list *begin_list, int size, t_list *first, int i)
{
	t_list	*second;
	void	*tmp;
	int		j;

	while (i < size - 1)
	{
		second = begin_list;
		j = 0;
		while (j < size - 1)
		{
			second = second->next;
			j++;
		}
		tmp = first->data;
		first->data = second->data;
		second->data = tmp;
		first = first->next;
		size--;
		i++;
	}
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*first;
	int		size;
	int		i;

	i = 0;
	first = begin_list;
	size = ft_list_size(begin_list);
	ft_swap_list(begin_list, size, first, i);
}
