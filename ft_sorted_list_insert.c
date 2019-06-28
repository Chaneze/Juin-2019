/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 08:36:34 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 18:30:39 by charoua          ###   ########.fr       */
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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*tmp;
	t_list	*new;

	tmp = NULL;
	new = ft_create_elem(data);
	if (!(*begin_list))
	{
		(*begin_list) = new;
		return ;
	}
	place_new(begin_list, cmp, tmp, new);
}
