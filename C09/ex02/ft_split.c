/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:05:07 by phbasin           #+#    #+#             */
/*   Updated: 2020/11/15 15:50:48 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

int		ft_wordlen(char *str, char *charset)
{
	int n;

	n = 0;
	while (str[n] && !ft_is_sep(charset, str[n]))
		n++;
	return (n);
}

char	*ft_wordcpy(char *src, char *dst, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		ft_wordnbr(char *str, char *charset)
{
	int b;
	int n;

	b = 0;
	n = 0;
	while (*str)
	{
		if (!ft_is_sep(charset, *str))
		{
			if (b == 0)
				n += 1;
			b = 1;
		}
		else
			b = 0;
		str++;
	}
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		n;
	int		size;
	char	**output;

	i = 0;
	size = ft_wordnbr(str, charset);
	output = malloc(sizeof(*output) * (size + 1));
	while (i < size)
	{
		while (*str && ft_is_sep(charset, *str))
			str++;
		n = ft_wordlen(str, charset);
		output[i] = malloc(sizeof(**output) * (n + 1));
		if (!output[i])
			return (NULL);
		ft_wordcpy(str, output[i], n);
		str += n;
		i++;
	}
	output[i] = '\0';
	return (output);
}
