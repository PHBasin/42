/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:08:06 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/17 14:11:21 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int x, int y, int i, int j)
{
	if (j == 1 && (i == 1 || i == x))
		ft_putchar('A');
	else if (j == y && (i == 1 || i == x))
		ft_putchar('C');
	else if ((i > 1 && i < x) && (j > 1 && j < y))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i != x + 1)
		{
			ft_print(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		i = 1;
		j++;
	}
}
