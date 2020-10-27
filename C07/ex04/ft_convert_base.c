/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 07:37:45 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/27 19:53:19 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_in_base(char c, char *base);
int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base)

int     ft_num_size(int n, int size_base_to)
{
    int i;
    
    i = 0;
    while (n > size_base_to)
    {
        n /= size_base_to;
        i++;
    }
    return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    char    *num;
    int     size_base_from;
    int     size_base_to;
    int     n;
    int     i;
    
    size_base_from = ft_check_base(base_from);
    size_base_to = ft_check_base(base_to);	
	n = ft_atoi_base(nbr, base_from);
	i = ft_num_size(n, size_base_to);
    num = malloc(sizeof(*num) * (i + 1));
    num[i--] = '\0';
    if (n < 0)
    {
        i = 2;
        num[0] = '-';
    }
    else
        i = 1;
    while (i > -1)
    {
		num[i] = base_to[n % size_base_to];
		n /= size_base_to;
		i--;
    }
    return (num);
}
