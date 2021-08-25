/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:29:14 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/19 09:25:17 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_check_charset(char *charset, char c)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i] && ft_check_charset(charset, str[i]))
		i++;
	if (str[i] != 0)
		count++;
	while (str[i])
	{
		if (ft_check_charset(charset, str[i])
			&& (!ft_check_charset(charset, str[i + 1]) && str[i + 1] != 0))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset, int *iword)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	i++;
	dest = malloc(sizeof(char) * i);
	if (!dest)
		return (0);
	i = 0;
	while (str[*iword] && ft_check_charset(charset, str[*iword]))
		*iword += 1;
	while (str[*iword] && !ft_check_charset(charset, str[*iword]))
	{
		dest[i] = str[*iword];
		*iword += 1;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		words;
	int		iword;
	int		i;

	words = ft_count_words(str, charset);
	iword = 0;
	dest = malloc(sizeof(char *) * (words + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < words)
	{
		dest[i] = ft_strdup(str, charset, &iword);
		i++;
	}
	dest[i] = 0;
	return (dest);
}
