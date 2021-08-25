/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcamugli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 10:51:33 by pcamugli          #+#    #+#             */
/*   Updated: 2021/08/14 21:36:06 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char	*str);

char	*ft_cut_arg(char	*str)
{
	char	*chaine;
	int		i;
	int		k;
	int		len;

	len = ft_strlen(str);
	if (len != 31)
		return (0);
	chaine = malloc(sizeof(char) * 17);
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			k++;
		else if (str[i] > '4' || str[i] < '0')
		{
			free(chaine);
			return (0);
		}
		chaine[k] = str[i];
		i++;
	}
	chaine[k + 1] = '\0';
	return (chaine);
}
