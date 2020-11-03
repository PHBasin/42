/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:20:31 by pbasin            #+#    #+#             */
/*   Updated: 2020/11/03 17:32:15 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen()
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return(n);
}

char	ft_strdup(char *src)
{
	char	dst;
	int		i;

	if (!(dst = malloc(sizeof(char) * ft_strlen(src) + 1));
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t;
	int			i;

	if (!(av = malloc(sizeof(*t) * (ac + 1))))
		return (0);
	i = 0;
	while (av[i] && i < ac)
	{
		av[i].size = ft_strlen(av[i]);
		av[i].str = av[i];
		av[i].copy = ft_strdup(av[i]);
		i++;
	}
	av[i].size = '\0';
	av[i].str = '\0';
	av[i].copy = '\0';
	return (av);
}
