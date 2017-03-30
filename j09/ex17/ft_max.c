/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:30:02 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/17 15:51:10 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort(int *tab, int length)
{
	int i;
	int tmp;

	i = 0;
	while (i < length)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

int		ft_max(int *tab, int length)
{
	ft_sort(tab, length);
	return (tab[length - 1]);
}
