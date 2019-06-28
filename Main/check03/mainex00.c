/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:31:42 by charoua           #+#    #+#             */
/*   Updated: 2019/06/08 11:37:01 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *s1;
	char *s2;
	const char *s3;
	const char *s4;

	s3 = " salut";
	s4 = " saluti    ";
	s1 = (char *)s3;
	s2 = (char *)s4;
	printf("%d\n", strcmp(s3, s4));
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
