/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex09.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:41:09 by charoua           #+#    #+#             */
/*   Updated: 2019/06/25 19:58:32 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_plus(void *data)
{
	data = data + 5;
}

int		cpm(void *data, void *data_ref)
{
	if (data > data_ref)
		return (0);
	else
		return (1);
}

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
	c = ft_create_elem("15");
	b->next = c;
	d = ft_create_elem("25");
	c->next = d;
	e = ft_create_elem("35");
	d->next = e;
	e->next = NULL;
	ft_list_foreach_if(a, &ft_plus,"16", &cpm);
	while (a)
	{
		printf("%s\n", a->data);
		a = a->next;
	}
	return (0);
}
