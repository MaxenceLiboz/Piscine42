/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdevigne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:36:17 by fdevigne          #+#    #+#             */
/*   Updated: 2021/08/22 16:03:23 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <ft.h>

int	ft_print_part(char *str, int cur)
{
	int	cur2;

	cur2 = 0;
	while (str[cur] >= '0' && str[cur] <= '9')
		cur++;
	while (str[cur] == ' ' || str[cur] == ':')
		cur++;
	while (str[cur] != '\n')
	{
		if (str[cur] == ' ')
		{
			while (str[cur + cur2] == ' ')
				cur2++;
			if (str[cur + cur2] == '\n')
				return (0);
			write(1, " ", 1);
			cur = cur + cur2;
		}
		cur2 = 0;
		write(1, &str[cur], 1);
		cur++;
	}
	return (0);
}

int	ft_display(char *str, char *to_find)
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
			{
				ft_print_part(str, cur_str);
				return (1);
			}
			cur_to_find++;
		}
		cur_str++;
	}
	return (0);
}
