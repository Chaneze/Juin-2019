/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:15:55 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 18:01:26 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*first;
	t_list	*tmp;
	int		i;

	i = 1;
	if (size <= 0)
		return (NULL);
	first = ft_create_elem(strs[0]);
	while (i < size)
	{
		tmp = first;
		first = ft_create_elem(strs[i]);
		first->next = tmp;
		i++;
	}
	return (first);
}
