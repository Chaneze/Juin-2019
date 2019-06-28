/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:21:14 by charoua           #+#    #+#             */
/*   Updated: 2019/06/08 17:51:56 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char s1[100];
	char *s2;
	char s3[100];
	const char *s4;

	s1[0] = 's';
	s3[0] = 's';
	s1[1] = 'b';
	s3[1] = 'b';
	s1[2] = '\0';
	s3[2] = '\0';
	s4 = " ca va\0";
	s2 = (char *)s4;
	printf("%s\n", strcat(s3, s4));
	printf("%s\n", ft_strcat(s1, s2));
	return (0);
}
