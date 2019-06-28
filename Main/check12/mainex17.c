/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex09.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:41:09 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 14:56:15 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int				diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (diff = s1[i] - s2[i]);
		i++;
	}
	return (diff);
}

int		main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*e;

	a = ft_create_elem("dllors");
//	a = NULL;
	b = ft_create_elem("jien");
	a->next = b;
	c = ft_create_elem("zava");
//	a->next = NULL;
	b->next = c;
	c->next = NULL;
	d = ft_create_elem("ittoi");
//	c->next = d;
	e = ft_create_elem("moujours");
	d->next = e;
	e->next = NULL;
	ft_sorted_list_merge(&a, d, &ft_strcmp);
	while (a)
	{
		printf("%s\n", a->data);
		a = a->next;
	}
	return (0);
}
