/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 14:24:36 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/29 22:14:04 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		valid(char c)
{
	return (!(c == '\n' || c == '\t' || c == ' '));
}

int		len_valid(char *str, int a)
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
	dest[i] = '\0';
	return (dest);
}

int		count_word(char *str)
{
	int i;
	int sign;
	int wc;

	i = 0;
	sign = 0;
	wc = 0;
	while (str[i] != '\0')
	{
		if (!(valid(str[i])))
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

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**tab;
	int		word;

	tab = (char**)malloc(sizeof(char*) * (count_word(str) + 1));
	if (!tab)
		return (0);
	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !(valid(str[i])))
			i++;
		if (str[i] != '\0')
		{
			tab[word] = (char*)malloc(sizeof(char) * (len_valid(str, i) + 1));
			if (!tab[word])
				return (0);
			ft_strcpy(tab[word], str, i);
			i += len_valid(str, i);
			word++;
		}
	}
	tab[word] = 0;
	return (tab);
}
