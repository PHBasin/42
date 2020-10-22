/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:10:37 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/21 15:00:09 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(char *tab, int size)
{
	int first;
	int last;
	int temp;

	first = 0;
	last = size - 1;
	while (first != size / 2)
	{
		temp = tab[first];
		tab[first] = tab[last];
		tab[last] = temp;
		first++;
		last--;
	}
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (*base)
	{
		j = i + 1;
		if (*base == 43 || *base == 45)
			return (0);
		while (base[j])
		{
			if (*base == base[j])
				return (0);
			j++;
		}
		base++;
		i++;
	}
	return (i);
}

int		ft_calc_result(int nbr, int nb_base, char *base, char *result)
{
	int i;
	int j;
	int reminder;

	i = 1;
	j = 0;
	while (i == 1)
	{
		reminder = nbr % nb_base;
		nbr /= nb_base;
		result[j] = base[reminder];
		j++;
		if (nbr == 0)
			i = 0;
	}
	result[j] = '\0';
	return (j);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		j;
	int		nb_base;
	char	result[32];

	nb_base = ft_check_base(base);
	if (nb_base > 1)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			write(1, "-", 1);
		}
		j = ft_calc_result(nbr, nb_base, base, result);
		ft_rev_int_tab(result, j);
		write(1, result, j);
	}
}
