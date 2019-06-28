/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex09.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:41:09 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 07:58:05 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)());

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

	a = ft_create_elem("salut");
	b = ft_create_elem("ca va");
	a->next = b;
	c = ft_create_elem("et tpo");
	b->next = c;
	d = ft_create_elem("alors5");
	c->next = d;
	e = ft_create_elem("bien");
	d->next = e;
	e->next = NULL;
	ft_list_sort(&a, &ft_strcmp);
	while (a)
	{
		printf("%s\n", a->data);
		a = a->next;
	}
	return (0);
}
