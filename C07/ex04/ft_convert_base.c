/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 07:37:45 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/28 08:53:21 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_in_base(char c, char *base);
int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base);

int		ft_num_size(int n, int size_base_to)
{
	int i;

	i = 0;
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
	int		size_base_to;
	int		n;
	int		i;
	int		neg;

	neg = 0;
	size_base_to = ft_check_base(base_to);
	n = ft_atoi_base(nbr, base_from);
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	i = ft_num_size(n, size_base_to);
	num = malloc(sizeof(*num) * (i + 1));
	num[i++] = '\0';
	while (--i > -1)
	{
		num[i] = base_to[n % size_base_to];
		n /= size_base_to;
	}
	if (neg)
		num[0] = '-';
	return (num);
}
