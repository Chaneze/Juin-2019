/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex09.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:41:09 by charoua           #+#    #+#             */
/*   Updated: 2019/06/26 20:25:54 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_merge(t_list **begin_list1, t_list *begin_list2);

int		main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*e;

	a = ft_create_elem("5");
	b = ft_create_elem("10");
	a->next = b;
	b->next = NULL;
	c = ft_create_elem("15");
	d = ft_create_elem("25");
	c->next = d;
	e = ft_create_elem("35");
	d->next = e;
	e->next = NULL;
	ft_list_merge(&a, c);
	while (a)
	{
		printf("%s\n", a->data);
		a = a->next;
	}
	return (0);
}
