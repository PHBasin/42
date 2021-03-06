/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 07:38:27 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/27 12:21:21 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == 43 || base[i] == 45 || base[i] == 32
				|| (base[i] > 8 && base[i] < 14))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int n;
	int neg;
	int base_size;

	base_size = ft_check_base(base);
	if (base_size < 2)
		return (0);
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	neg = 1;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			neg *= -1;
		str++;
	}
	n = 0;
	while (ft_in_base(*str, base) >= 0)
	{
		n = n * base_size + ft_in_base(*str, base);
		str++;
	}
	return (n * neg);
}
