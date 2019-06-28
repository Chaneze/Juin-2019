/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 07:41:18 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 07:59:05 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	void	*overflow;
	t_list	*tmp;

	tmp = *begin_list;
	while ((*begin_list) && ((*begin_list)->next))
	{
		if (((*cmp)((*begin_list)->data, (*begin_list)->next->data)) > 0)
		{
			overflow = (*begin_list)->data;
			(*begin_list)->data = (*begin_list)->next->data;
			(*begin_list)->next->data = overflow;
			(*begin_list) = tmp;
		}
		else
			(*begin_list) = (*begin_list)->next;
	}
	(*begin_list) = tmp;
}
