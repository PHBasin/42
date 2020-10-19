/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:14:38 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/19 06:52:40 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtolowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		b;

	i = 0;
	b = 1;
	ft_strtolowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (b == 1)
				str[i] = str[i] - 32;
			b = 0;
		}
		else if (str[i] > 47 && str[i] < 58)
			b = 0;
		else
			b = 1;
		i++;
	}
	return (str);
}
