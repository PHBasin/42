/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguiglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 09:24:36 by bguiglie          #+#    #+#             */
/*   Updated: 2020/10/17 11:42:28 by bguiglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_side(int i, int y)
{
	if (i == 1 || i == y)
		ft_putchar('o');
	else
		ft_putchar('|');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (j == 1 || j == x)
				ft_side(i, y);
			else
			{
				if (i == 1 || i == y)
					ft_putchar('-');
				else
					ft_putchar(' ');
			}
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
