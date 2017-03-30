/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 14:43:15 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/26 14:45:08 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_word_tables(char **tab);

char	**ft_split_whitespaces(char *str);

int		main(int a, char **b)
{
	char tab[50];

	if (a > 1)
		ft_print_word_tables(ft_split_whitespaces(b[1]));
		return (0);
}
