/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:39:50 by charoua           #+#    #+#             */
/*   Updated: 2019/06/11 13:25:27 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[100];
	char dest2[100];
	char *cpy;
	char *src;
	const char *src2;
	unsigned int n;
	int i;

	cpy = "salut c";
	i = 0;
	while (cpy[i] != '\0')
	{
		dest[i] = cpy[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (cpy[i] != '\0')
	{
		dest2[i] = cpy[i];
		i++;
	}
	dest2[i] = '\0';
	src = "ca";
	n = 90;
	printf("%d\n", ft_strlcat(dest, src, n));
	printf("%s\n", dest);
	src2 = "ca";
	n = 90;
	printf("%lu\n", strlcat(dest2, src2, n));
	printf("%s\n", dest2);
	return (0);
}
