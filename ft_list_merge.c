/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 20:00:24 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 18:15:34 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	if (!(*begin_list1))
	{
		(*begin_list1) = begin_list2;
		return ;
	}
	tmp = *begin_list1;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = begin_list2;
}
