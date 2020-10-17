/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 12:34:36 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/17 18:31:25 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_top(int x, int i)
{
	if (i == 1)
		ft_putchar('A');
	else if (i == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	ft_print_middle(int x, int i)
{
	if ((i == 1) || (i == x))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	ft_print_bottom(int x, int i)
{
	if (i == 1)
		ft_putchar('A');
	else if (i == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	ft_print(int x, int y, int i, int j)
{
	if (j == 1)
		ft_print_top(x, i);
	else if (j == y)
		ft_print_bottom(x, i);
	else
		ft_print_middle(x, i);
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
		j++;
	}
}
