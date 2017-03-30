/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 16:24:07 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/30 16:32:37 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		wc;
	char	*tmp;
	int		sort;

	sort = 0;
	while (sort == 0)
	{
		wc = 0;
		sort = 1;
		while (tab[wc + 1] != 0)
		{
			if (cmp(tab[wc], tab[wc + 1]) > 0)
			{
				tmp = tab[wc];
				tab[wc] = tab[wc + 1];
				tab[wc + 1] = tmp;
				sort = 0;
			}
			wc++;
		}
	}
}
