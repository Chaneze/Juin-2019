/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:39:50 by charoua           #+#    #+#             */
/*   Updated: 2019/06/10 18:10:30 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(int argc, char **argv)
{
	char *src;
	char dest[100];
	char dest2[100];
	unsigned int n;

	(void)argc;
	(void)**argv;
	n = 10;
	src = "SALUT\0";
//	n = ft_strlcpy(dest, argv[1], n);
	n = ft_strlcpy(dest, src, n);
	printf("%d\n", n);
	printf("%s\n", dest);
	n = 10;
//	n = strlcpy(dest2, argv[1], n);
	n = strlcpy(dest2, src, n);
	printf("%d\n", n);
	printf("%s\n", dest2);
	return (0);
}
