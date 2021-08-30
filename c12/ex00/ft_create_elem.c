/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:52:44 by maxencelibo       #+#    #+#             */
/*   Updated: 2021/08/30 15:56:17 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*dest;

	dest = malloc(sizeof(t_list));
	if (!dest)
		return (0);
	dest->data = data;
	dest->next = 0;
	return (dest);
}
