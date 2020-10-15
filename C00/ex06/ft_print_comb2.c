/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:56:30 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/14 18:44:57 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
	ft_putchar(' ');
	ft_putchar(j / 10 + 48);
	ft_putchar(j % 10 + 48);
	if (i != 98 || j != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_print(i, j);
			j++;
		}
		i++;
	}
}
