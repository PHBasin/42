/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_alt.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 08:52:06 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/27 08:52:12 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

long int		ft_len(char *str)
{
	long int strlen;
	strlen = 0;
	while (str[strlen])
		strlen++;
	return (strlen);
}
long int		ft_strstr(char *str, char to_find)
{
	long int		counter;
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == to_find)
			return (counter);
		else
			counter++;
	}
	return (-1);
}
bool			ft_checkbase(char *base)
{
	unsigned int baselen;
	unsigned int n;
	unsigned int counter;
	baselen = ft_len(base);
	if (baselen <= 1)
		return (false);
	n = 0;
	while (base[n])
	{
		if (base[n] == ' ' || (base[n] >= 9 && base[n] <= 13)
				|| base[n] == '+' || base[n] == '-')
			return (false);
		counter = n + 1;
		while (base[counter])
		{
			if (base[counter] == base[n])
				return (false);
			counter++;
		}
		n++;
	}
	return (true);
}
int				ft_atoi_base(char *str, char *base)
{
	long int		nbr;
	unsigned int	n_minus;
	if (!ft_checkbase(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	n_minus = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			n_minus++;
		str++;
	}
	nbr = 0;
	while (*str && ft_strstr(base, *(str)) != -1)
	{
		nbr += ft_strstr(base, *str);
		nbr *= ft_len(base);
		str++;
	}
	nbr /= ft_len(base);
	n_minus % 2 ? nbr *= -1 : nbr;
	return (nbr);
}
