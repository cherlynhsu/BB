/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 13:55:09 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/26 14:49:27 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		countword(char *str)
{
	int i;
	int wc;
	int sign;

	i = 0;
	wc = 0;
	sign = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			sign = 0;
		else if (sign == 0)
		{
			sign = 1;
			wc++;
		}
		i++;
	}
	return (wc);
}

int		valid(char c)
{
	return (!(c == '\t' || c == '\n' || c == ' '));
}

int		ft_len(char *str, int a)
{
	int i;

	i = 0;
	while (str[a + i] != '\0' && valid(str[a + i]))
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int a)
{
	int i;

	i = 0;
	while (src[a + i] != '\0' && valid(src[a + i]))
	{
		dest[i] = src[a + i];
		i++;
	}
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**tab;
	int		word;

	tab = (char**)malloc(sizeof(*tab) * (countword(str) + 1));
	if (!tab)
		return (0);
	i = 0;
	word = 0;
	while (str[i] != '\0' && word < countword(str))
	{
		while (str[i] != '\0' && (!(valid(str[i]))))
			i++;
		if (str[i] != '\0')
		{
			tab[word] = (char*)malloc(sizeof(char) * (ft_len(str, i) + 1));
			if (!tab[word])
				return (0);
			ft_strcpy(tab[word], str, i);
			i = i + ft_len(str, i);
			word++;
		}
	}
	tab[word] = 0;
	return (tab);
}
