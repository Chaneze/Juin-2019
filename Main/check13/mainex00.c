/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:02:21 by charoua           #+#    #+#             */
/*   Updated: 2019/06/27 16:42:49 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree		*btree_create_node(void *item);

int		main(void)
{
	t_btree *maillon;

	maillon = btree_create_node("salut");
	printf("%s\n", maillon->item);
	return (0);
}
