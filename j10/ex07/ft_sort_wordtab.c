/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 14:55:20 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/30 16:32:10 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[wc], tab[wc + 1]) > 0)
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
