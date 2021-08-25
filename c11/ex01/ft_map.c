/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:10:36 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/24 16:43:02 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*dest;

	dest = malloc(sizeof(*tab) * length);
	if (!dest)
		return (0);
	i = -1;
	while (++i < length)
		dest[i] = (*f)(tab[i]);
	return (dest);
}
