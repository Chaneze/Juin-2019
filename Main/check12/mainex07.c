/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:02:21 by charoua           #+#    #+#             */
/*   Updated: 2019/06/25 19:33:43 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

int		main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*e;
	t_list	*pos;

	a = ft_create_elem("5");
	b = ft_create_elem("10");
	a->next = b;
	c = ft_create_elem("15");
	b->next = c;
	d = ft_create_elem("25");
	c->next = d;
	e = ft_create_elem("35");
	d->next = e;
	e->next = NULL;
	pos = ft_list_at(a, 3);
	printf("%s\n", pos->data);
	return (0);
}
