/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:14:38 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/17 14:58:32 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_low(char c)
{
	return (c > 96 && c < 123);
}

int		ft_is_upp(char c)
{
	return (c > 64 && c < 91);
}

int		ft_is_num(char c)
{
	return (c > 47 && c < 58);
}

int		ft_is_print(char c)
{
	return (c > 31 && c < 127);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (ft_is_low(str[0]))
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (!ft_is_low(str[i]) && !ft_is_upp(str[i]))
		{
			if (!ft_is_num(str[i]) && ft_is_print(str[i]))
			{
				if (ft_is_low(str[i + 1]))
				{
					str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
}
