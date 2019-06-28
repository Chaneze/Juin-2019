/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:50:15 by charoua           #+#    #+#             */
/*   Updated: 2019/06/06 13:01:21 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(int argc, char **argv)
{
	char dest[15];
	unsigned int n;

	(void)argc;
	n = 10;
	*dest = *ft_strncpy(dest, argv[1], n);
	printf("%s\n", dest);
	printf("%s", strncpy(dest, argv[1], n));
	return (0);
}
