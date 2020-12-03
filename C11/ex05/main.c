/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:03:31 by phbasin           #+#    #+#             */
/*   Updated: 2020/12/03 13:44:19 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (*argv[2] == '+')
			ft_add(argv[1], argv[3]);
		else if (*argv[2] == '*')
			ft_mul(argv[1], argv[3]);
		else if (*argv[2] == '-')
			ft_sou(argv[1], argv[3]);
		else if (*argv[2] == '/')
			ft_div(argv[1], argv[3]);
		else if (*argv[2] == '%')
			ft_mod(argv[1], argv[3]);
		else
			ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
