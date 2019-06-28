/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 20:09:07 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 17:14:36 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list,
		void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	while (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		(*free_fct)(tmp->data);
		free(tmp);
	}
	tmp2 = *begin_list;
	while (tmp2 && tmp2->next)
	{
		if ((*cmp)(tmp2->next->data, data_ref) == 0)
		{
			tmp = tmp2->next;
			tmp2->next = tmp->next;
			(*free_fct)(tmp->data);
			free(tmp);
		}
		if (tmp2->next)
			tmp2 = tmp2->next;
	}
}
