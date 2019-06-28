/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:14:40 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 17:15:36 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	place_new(t_list **begin_list, int (*cmp)(), t_list *tmp, t_list *new)
{
	t_list	*search;

	search = (*begin_list);
	if (search && (*cmp)(search->data, new->data) >= 0)
	{
		new->next = search;
		*begin_list = new;
		return ;
	}
	while (search && search->next)
	{
		if ((*cmp)(search->next->data, new->data) >= 0)
		{
			tmp = search->next;
			search->next = new;
			new->next = tmp;
			return ;
		}
		search = search->next;
	}
	search->next = new;
}

void	ft_sorted_list_insert(t_list **begin_list,
		t_list *new, int (*cmp)())
{
	t_list	*tmp;

	tmp = NULL;
	if (!(*begin_list))
	{
		(*begin_list) = new;
		return ;
	}
	place_new(begin_list, cmp, tmp, new);
}

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	t_list	*tmp;

	if (!(*begin_list1))
	{
		(*begin_list1) = begin_list2;
		return ;
	}
	while (begin_list2)
	{
		tmp = begin_list2;
		begin_list2 = begin_list2->next;
		tmp->next = NULL;
		ft_sorted_list_insert(begin_list1, tmp, cmp);
	}
}
