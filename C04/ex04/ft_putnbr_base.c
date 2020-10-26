/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:10:37 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/26 16:27:51 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == 43 || base[i] == 45)
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_size;
	unsigned int	nb;

	if (ft_check_base(base) > 1)
	{
		base_size = ft_strlen(base);
		if (nbr < 0)
		{
			nb = -nbr;
			ft_putchar('-');
		}
		else
			nb = nbr;
		if (nb >= base_size)
		{
			ft_putnbr_base(nb / base_size, base);
		}
		ft_putchar(base[nb % base_size]);
	}
}
