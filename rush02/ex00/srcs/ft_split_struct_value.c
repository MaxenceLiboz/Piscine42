/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_struct_value.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:22:19 by aleveil           #+#    #+#             */
/*   Updated: 2021/09/01 18:22:41 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft.h>

void	ft_else(int valuelen, char *value, char **value_tab, int *index)
{
	int		offset;

	offset = 3 - valuelen;
	if (valuelen == 3 && value[0] != '0')
	{
		ft_hundreds_or_units(value_tab, index, value[0 - offset]);
		value_tab[*index] = ft_strdup("100");
		*index += 1;
	}
	if (valuelen >= 2 && value[1 - offset] != '0')
		ft_tens(value_tab, index, value[1 - offset], value[2 - offset]);
	if (value[1 - offset] != '1' && value[2 - offset] != '0')
		ft_hundreds_or_units(value_tab, index, value[2 - offset]);
}

char	**ft_split_struct_value(char *value, int valuelen)
{
	int		offset;
	char	**value_tab;
	int		tablen;
	int		index;

	index = 0;
	offset = 3 - valuelen;
	tablen = ft_tablen_calculator(value, valuelen, offset);
	value_tab = (char **)malloc(sizeof(char *) * (tablen + 1));
	if (!value_tab)
		return (0);
	if (valuelen == 1 && value[0] == '0')
		value_tab[index++] = ft_strdup("0");
	else
	{
		ft_else(valuelen, value, value_tab, &index);
	}
	value_tab[index] = 0;
	return (value_tab);
}
