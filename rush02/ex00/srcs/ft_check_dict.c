/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:47:48 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/22 19:08:57 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_check_dict_size(char *filename)
{
	char	c[4096 + 1];
	int		i;
	int		fd;
	int		size;

	i = 1;
	size = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	while (i > 0)
	{
		 i = read(fd, c, 4096);
		 size += i;
	}
	close(fd);
	return (size);
}

char	*ft_check_dict(char *filename)
{
	int		fd;
	int		size;
	char	*dict;

	size = ft_check_dict_size(filename);
	if (size == 0)
		return (0);
	dict = malloc(sizeof(char) * (size + 1));
	if (!dict)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	read(fd, dict, size);
	dict[size - 1] = '\0';
	return (dict);
}
