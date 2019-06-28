/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 19:17:24 by charoua           #+#    #+#             */
/*   Updated: 2019/06/10 18:10:40 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void		ft_putstr_non_printable(char *str);
void	ft_hexa(int np);

int		main(void)
{
	char dest[100];
	char *str;
	int i;

	i = 0;
	str = "Coucou\a\b\t\n\v\f\rtu vas bien ?";
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	dest[2] = -88;
	dest[25] = '\0';
	ft_putstr_non_printable(dest);
	return (0);

//	write(1, "\n", 1);
//	ft_hexa(-88);
}
