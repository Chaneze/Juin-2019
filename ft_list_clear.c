/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:35:26 by charoua           #+#    #+#             */
/*   Updated: 2019/06/25 19:48:38 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		(*free_fct)(tmp->data);
		free(tmp);
		tmp = begin_list;
	}
}
