/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:18:43 by charoua           #+#    #+#             */
/*   Updated: 2019/06/06 09:45:22 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	char dest[100];
	
	(void)argc;
	*dest = *ft_strcpy(dest, argv[1]);
	printf("%s", dest);
	return (0);
}
