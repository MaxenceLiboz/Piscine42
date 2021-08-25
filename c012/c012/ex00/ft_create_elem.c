/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:29:32 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/23 15:45:02 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>
t_list	*ft_create_elem(void *data)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if (!res)
		return (0);
	res->data = data;
	res->next = 0;
	return (res);
}
