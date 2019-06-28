/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:39:44 by charoua           #+#    #+#             */
/*   Updated: 2019/06/08 12:16:32 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *s1;
	char *s2;
	const char *s3;
	const char *s4;
	unsigned int n;

	s3 = " salut";
	s4 = " saluti    ";
	s1 = (char *)s3;
	s2 = (char *)s4;
	n = 7;
	printf("%d\n", strncmp(s3, s4, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
