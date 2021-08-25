/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:28:20 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/17 08:25:54 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_count(char **strs, int size)
{
	int		i;
	int		y;
	int		charsize;

	i = 0;
	charsize = 0;
	while (i < size)
	{
		y = 0;
		while (strs[i][y])
		{
			charsize++;
			y++;
		}
		i++;
	}
	return (charsize);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_copy(char **strs, char *str, char *sep, int size)
{
	int		i;
	int		charnum;
	int		sepi;
	int		y;

	i = 0;
	charnum = 0;
	while (i < size)
	{
		y = 0;
		sepi = 0;
		while (strs[i][y])
			str[charnum++] = strs[i][y++];
		if (i < size - 1)
		{
			while (sep[sepi])
			{
				str[charnum] = sep[sepi];
				charnum++;
				sepi++;
			}
		}
		i++;
	}
	str[charnum] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		strslen;
	int		seplen;

	strslen = ft_count(strs, size);
	seplen = ft_strlen(sep);
	str = malloc(sizeof(char) * strslen + (size * seplen));
	if (!str)
		return (0);
	ft_copy(strs, str, sep, size);
	return (str);
}
