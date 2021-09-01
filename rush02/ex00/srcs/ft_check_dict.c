/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:47:48 by mliboz            #+#    #+#             */
/*   Updated: 2021/09/01 17:33:10 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
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

/*int	ft_find_error(char *dict)
{
	int		i;

	i = 0;
	while(dict[i])
	{

		i++;
	}
}*/

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
