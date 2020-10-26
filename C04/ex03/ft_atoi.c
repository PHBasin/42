/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:09:58 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/26 14:34:53 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int neg;
	int n;
	int i;

	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	neg = 1;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			neg *= -1;
		str++;
	}
	i = 0;
	n = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		n += str[i] - 48;
		if (str[i + 1] > 47 && str[i + 1] < 58)
			n *= 10;
		i++;
	}
	return (n * neg);
}
