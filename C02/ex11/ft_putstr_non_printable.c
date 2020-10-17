/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbasin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:15:29 by pbasin            #+#    #+#             */
/*   Updated: 2020/10/17 19:55:37 by pbasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_more_or_less(char c)
{
    if(c < 10)
    {
        c += 48;
    }
    else
    {
        c += 55;
    }
}

void ft_print_hex(char c)
{
    while (c / 16 != 0)
    {
        c /= 16;
            if (c < 16)
                ft_putchar(c);
            else
                ft_more_or_less(c);
        c %= 16;
    }
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
		    ft_putchar('\\');
			ft_print_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(void)
{
    char str[80] = "salut, comment tu vas \n? 42mots quarante-deux; cinquante+et+un";
    ft_putstr_non_printable(str);
    
    return (0);
}


