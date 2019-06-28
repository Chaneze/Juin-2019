/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:48:40 by charoua           #+#    #+#             */
/*   Updated: 2019/06/17 12:07:48 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

int		main(void)
{
	char *src;
	char *dst;
	char *dst2;
	const char *src2;

	src = "ca va bien et toi alors jjdfghjkdfhjdfghfhgkd";
	dst = ft_strdup(src);
	printf("%s\n", dst);
	printf("%d\n", ft_strlen(dst));
	src2 = "ca va bien et toi alors jjdfghjkdfhjdfghfhgkd";
	dst2 = strdup(src2);
	printf("%s\n", dst2);
	printf("%d\n", ft_strlen(dst2));
	return (0);
}
