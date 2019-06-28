/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:51:47 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 17:58:35 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *back;

	back = *begin_list;
	if (back)
	{
		while (back->next)
			back = back->next;
		back->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
