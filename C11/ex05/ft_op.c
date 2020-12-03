/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:18:04 by phbasin           #+#    #+#             */
/*   Updated: 2020/12/03 11:56:25 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_add(char *valeur1, char *valeur2)
{
	ft_putnbr(ft_atoi(valeur1) + ft_atoi(valeur2));
}

void	ft_sou(char *valeur1, char *valeur2)
{
	ft_putnbr(ft_atoi(valeur1) - ft_atoi(valeur2));
}

void	ft_mul(char *valeur1, char *valeur2)
{
	ft_putnbr(ft_atoi(valeur1) * ft_atoi(valeur2));
}

void	ft_div(char *valeur1, char *valeur2)
{
	if (ft_atoi(valeur2))
		ft_putnbr(ft_atoi(valeur1) / ft_atoi(valeur2));
	else
		ft_putstr("Stop : division by zero");
}

void	ft_mod(char *valeur1, char *valeur2)
{
	if (ft_atoi(valeur2))
		ft_putnbr(ft_atoi(valeur1) % ft_atoi(valeur2));
	else
		ft_putstr("Stop : modulo by zero");
}
