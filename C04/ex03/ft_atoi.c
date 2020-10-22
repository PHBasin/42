/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:09:58 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/21 14:58:20 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_find_num(char *str)
{
	while ((*str > 8 && *str < 14) || *str == 32 || *str == 45 || *str == 43)
		str++;
	return (str);
}

int		ft_dash_nb(char *str)
{
	int i;

	i = 1;
	while (*str)
	{
		if (*str == 45)
			i *= -1;
		str++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	char	*nums;
	int		i;
	int		n;

	nums = ft_find_num(str);
	i = 0;
	n = 0;
	while (nums[i] > 48 && nums[i] < 57 && nums)
	{
		n += nums[i] - 48;
		if (nums[i + 1] > 48 && nums[i + 1] < 57)
			n *= 10;
		i++;
	}
	return (n * ft_dash_nb(str));
}
