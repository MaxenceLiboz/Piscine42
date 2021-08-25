/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_struct_value.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:22:19 by aleveil           #+#    #+#             */
/*   Updated: 2021/08/22 22:33:07 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <ft.h>

int	ft_tablen_calculator(char *value, int valuelen, int offset)
{
	int	len;

	len = 0;
	if (valuelen == 3)
		len += 2;
	if (valuelen >= 2 && value[1 - offset] != '0')
		len += 1;
	if (value[1 - offset] != '1' && value[0 - offset] != '0')
		len += 1;
	return (len);
}

int	ft_tens(char **value_tab, int *index, char t_value, char u_value)
{
	char	str_ten[3];

	str_ten[0] = t_value;
	if (t_value == '1')
		str_ten[1] = u_value;
	else
		str_ten[1] = '0';
	str_ten[2] = '\0';
	value_tab[*index] = ft_strdup(str_ten);
	*index += 1;
	return (0);
}

int	ft_hundreds_or_units(char **value_tab, int *index, char hu_value)
{
	char	str_hundred_or_units[2];

	str_hundred_or_units[0] = hu_value;
	str_hundred_or_units[1] = '\0';
	value_tab[*index] = ft_strdup(str_hundred_or_units);
	*index += 1;
	return (0);
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
	value_tab = (char **)malloc(sizeof(char*) * (tablen + 1));
	if (!value_tab)
		return (0);
	if (valuelen == 1 && value[0] == '0')
	{
		value_tab[index] = ft_strdup("0");
		index += 1;
	}
	else
	{
		if (valuelen == 3 && value[0] != '0')
		{
			ft_hundreds_or_units(value_tab, &index, value[0 - offset]);
			value_tab[index] = ft_strdup("100");
			index += 1;
		}
		if (valuelen >= 2 && value[1 - offset] != '0')
		{
			ft_tens(value_tab, &index, value[1 - offset], value[2 - offset]);
		}
		if (value[1 - offset] != '1' && value[2 - offset] != '0')
			ft_hundreds_or_units(value_tab, &index, value[2 - offset]);
	}
	value_tab[index] = 0;
	return (value_tab);
}
