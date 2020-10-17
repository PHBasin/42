/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 12:34:36 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/17 12:43:24 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == x && j == y))
		ft_putchar('/');
	else if ((i == 1 && j == y) || (i == x && j == 1))
		ft_putchar('\\');
	else if ((i > 1 && i < x) && (j > 1 && j < y))
		ft_putchar(' ');
	else
		ft_putchar('*');
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
