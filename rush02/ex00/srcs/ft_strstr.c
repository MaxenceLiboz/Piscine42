/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdevigne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:36:17 by fdevigne          #+#    #+#             */
/*   Updated: 2021/08/22 17:56:03 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strstr(char *str, char *to_find)
{
	int	cur_str;
	int	cur_to_find;

	cur_str = 0;
	cur_to_find = 0;
	while (str[cur_str] != '\0')
	{
		cur_to_find = 0;
		while (str[cur_str + cur_to_find] == to_find[cur_to_find])
		{
			if (to_find[cur_to_find + 1] == '\0')
				return (1);
			cur_to_find++;
		}
		cur_str++;
	}
	return (0);
}
