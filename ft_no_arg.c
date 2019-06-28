/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 12:21:37 by charoua           #+#    #+#             */
/*   Updated: 2019/06/23 19:43:33 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (diff = s1[i] - s2[i]);
		i++;
	}
	return (diff);
}

char	*ft_clean(char *str)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	tmp = (char*)malloc(sizeof(*tmp) * (i + 1));
	if (!tmp)
		return (NULL);
	while (j < i)
	{
		tmp[j] = str[j];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

void	ft_no_arg2(char *buf, char *str, int ret)
{
	char *clean;

	clean = NULL;
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		clean = ft_clean(buf);
		if (!(str = check_arg(clean)))
		{
			if (ft_strcmp(clean, "q\0") == 0)
			{
				write(1, "End of program!\n", 16);
				free(clean);
				break ;
			}
			write(2, "Number not valid\n", 17);
		}
		else
			ft_valid(str);
		free(clean);
	}
	free(buf);
}

void	ft_no_arg(void)
{
	int		ret;
	char	*buf;
	char	*str;

	ret = 0;
	str = NULL;
	if ((buf = (char*)malloc(sizeof(*buf) * (BUF_SIZE + 1))))
	{
		ft_no_arg2(buf, str, ret);
	}
}
