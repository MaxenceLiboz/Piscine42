/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:20:09 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/08 21:18:05 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char	*str)
{
	int	o;

	o = 0;
	while (str[o] != '\0')
	{
		if (str[o] >= 'A' && str[o] <= 'Z')
		{
			str[o] += 32;
		}
		o++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	o;

	o = 1;
	ft_strupcase(str);
	while (str[o] != '\0')
	{
		if (str[o] >= 'a' && str[o] <= 'z')
		{
			if (! (str[o - 1] >= 'a' && str[o - 1] <= 'z'))
				if (! (str[o - 1] >= '0' && str[o - 1] <= '9'))
					if (! (str[o - 1] >= 'A' && str[o - 1] <= 'Z'))
						str[o] -= 32;
		}
		o++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	return (str);
}
