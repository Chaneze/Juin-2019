/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 15:08:54 by charoua           #+#    #+#             */
/*   Updated: 2019/06/11 12:51:54 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char **argv)
{
	const char *haystack;
	const char *needle;
	(void)argc;

//	str = "salut comment-15 cca va?";
//	to_find = "-15\0";
	haystack = (const char *)argv[1];
	needle = (const char *)argv[2];
	printf("%s\n", strstr(haystack, needle));
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	return (0);
}
