/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:17:56 by mliboz            #+#    #+#             */
/*   Updated: 2021/09/01 18:36:10 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft.h>

int	ft_strlen_trim_z(char *arg)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (arg[i] == '0' && arg[i + 1] != '\0')
		i++;
	while (arg[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_argdup(char *arg)
{
	int		i;
	char	*res_arg;
	int		size;
	int		nb_z;

	i = 0;
	size = ft_strlen_trim_z(arg);
	nb_z = ft_strlen(arg) - size;
	res_arg = (char *)malloc(sizeof(char) * (size + 1));
	if (!res_arg)
		return (0);
	while (i < size)
	{
		res_arg[i] = arg[i + nb_z];
		i++;
	}
	res_arg[i] = '\0';
	return (res_arg);
}
