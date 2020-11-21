/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phbasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:11:07 by phbasin           #+#    #+#             */
/*   Updated: 2020/11/21 07:56:30 by phbasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

int		ft_displayfile(char *path)
{
	int		fd;
	int		len;
	char	buf[30720];

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	len = read(fd, buf, 30720);
	ft_putstr(1, buf);
	close(fd);
	return (len);
}

int		main(int argc, char *argv[])
{
	if (argc > 2)
		ft_putstr(2, "Too many arguments.\n");
	else if (argc < 2)
		ft_putstr(2, "File name missing.\n");
	else if (ft_displayfile(argv[1]) < 0)
		ft_putstr(2, "Cannot read file.\n");
	return (0);
}
