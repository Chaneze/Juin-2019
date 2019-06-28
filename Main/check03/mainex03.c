/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:56:23 by charoua           #+#    #+#             */
/*   Updated: 2019/06/08 17:48:35 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char s1[100];
	char *s2;
	char s3[100];
	const char *s4;
	unsigned int i;

	s1[0] = 's';
	s3[0] = 's';
	s1[1] = 'b';
	s3[1] = 'b';
	s1[2] = '\0';
	s3[2] = '\0';
	s4 = " ca va\0";
	s2 = (char *)s4;
	i = -3;
	printf("%s\n", strncat(s3, s4, i));
	printf("%s\n", ft_strncat(s1, s2, i));
	return (0);
}
