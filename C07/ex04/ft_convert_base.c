/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 07:37:45 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/28 11:19:40 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_in_base(char c, char *base);
int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base);

int		ft_bases_checked(char *base_to, char *base_from)
{
	int is_base_to_ok;
	int is_base_from_ok;

	is_base_to_ok = ft_check_base(base_to);
	is_base_from_ok = ft_check_base(base_from);
	if (!(is_base_to_ok && is_base_from_ok))
		return (0);
	return (is_base_to_ok);
}

int		ft_num_size(int n, int size_base_to)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i = 2;
	}
	else
		i = 1;
	while (n > size_base_to)
	{
		n /= size_base_to;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*num;
	int		n;
	int		i;
	int		neg;

	neg = 0;
	if (!ft_bases_checked(base_to, base_from))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	i = ft_num_size(n, ft_bases_checked(base_to, base_from));
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	num = malloc(sizeof(*num) * (i + 1));
	num[i + neg] = '\0';
	while (--i > -1)
	{
		num[i] = base_to[n % ft_bases_checked(base_to, base_from)];
		n /= ft_bases_checked(base_to, base_from);
	}
	if (neg)
		num[0] = '-';
	return (num);
}
