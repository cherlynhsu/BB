/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:30:02 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/17 15:50:10 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

int		main(void)
{
	int tab[] = {1, -8, 5, 32, 9, 7, 7, 3, 42};
	int length;

	length = 9;
	printf("%d\n", ft_max(tab, length));
	return (0);
}
