/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:59:46 by charoua           #+#    #+#             */
/*   Updated: 2019/06/15 20:12:09 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int argc, char **argv)
{
	(void)argc;
	//	int i;
	//	char *str;

	//	i = ft_atoi_base(argv[1], argv[2], ft_check_base(argv[2]));
	//	printf("%d\n", i);
	//	str = ft_putnbr_base(i, argv[3], ft_check_base(argv[3]));
	//	printf("%s\n", str);
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
