/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 14:24:36 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/29 20:37:55 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		valid(char c)
{ 
	return (!(c == '\n' || c == '\t' || c == ' '));
}

int		ft_len_valid(char *str, int a)
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
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
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

	i = 0;
	word = 0;
	tab = (char**)malloc(sizeof(*tab) * (count_word(str) + 1));
	if (!tab)
		return (0);
	while (str[i] != '\0' && word < count_word(str))
	{
		while (str[i] != '\0' && !valid(str[i]))
			i++;
		if (str[i] != '\0')
		{
			tab[word] = (char*)malloc(sizeof(char) * (ft_len_valid(str, i) + 1));
			if (!tab[word])
				return (0);
			ft_strcpy(tab[word], str, i);
			i = i + ft_len_valid(str, i);
			word++;
		}
	}
		tab[word] = 0;
		return (tab);
}

void	ft_putchar(char c)
{ 
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int a, char **b)
{
	char tab[30];

	if (a > 1)
		ft_print_words_tables(ft_split_whitespaces(b[1]));
	return (0);
	}
