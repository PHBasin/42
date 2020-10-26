/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:04:52 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/24 13:04:21 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_strswap(char *a[], char *b[])
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_strswap(&argv[i], &argv[j]);
		}
	}
	i = 0;
	while (++i < argc)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]++);
		}
		ft_putchar('\n');
	}
	return (0);
}
