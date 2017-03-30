/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:15:19 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/30 15:57:46 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_wordtab(char **tab);

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab);

int		main(int ac, char **av)
{
	(void)ac;
	char	**tab;
	tab = ft_split_whitespaces(av[1]);
	ft_sort_wordtab(tab);
	ft_print_words_tables(tab);
}
