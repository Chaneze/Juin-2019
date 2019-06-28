/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:52:59 by charoua           #+#    #+#             */
/*   Updated: 2019/06/13 19:53:05 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_str(char *str, char *base, int size_base)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < size_base)
		{
			if (str[i] == base[j])
				count++;
			j++;
		}
		if (count != i + 1)
			return (count);
		i++;
	}
	return (count);
}

int		ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb = nb * ft_power(nb, power - 1));
}

long	ft_str_to_int(char *str, char *base, int size_str, int size_base)
{
	int		i;
	int		j;
	long	rslt;

	i = 0;
	rslt = 0;
	while (i < size_str)
	{
		j = 0;
		while (str[i] != base[j])
			j++;
		rslt = rslt + j * ft_power(size_base, size_str - 1 - i);
		i++;
	}
	return (rslt);
}

int		ft_atoi_base(char *str, char *base, int size_bf)
{
	int size_str;
	int sign;
	int i;

	sign = 0;
	i = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	size_str = ft_check_str(str + i, base, size_bf);
	if (size_str > 0)
	{
		if (sign % 2)
			return (-1 * ft_str_to_int(str + i, base, size_str, size_bf));
		else
			return (ft_str_to_int(str + i, base, size_str, size_bf));
	}
	return (0);
}
