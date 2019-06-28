/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:02:21 by charoua           #+#    #+#             */
/*   Updated: 2019/06/25 16:29:02 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_list	*test;

	test = ft_list_push_strs(argc, argv);
	while (test)
	{
		printf("%s\n", test->data);
		test = test->next;
	}
	return (0);
}
