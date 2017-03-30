/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:52:24 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/15 15:09:20 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}

int		main(void)
{
	int tab[] = {1, -8, 5, 32, 9, 7, 7, 3, 92};
	int size;

	size = 9;
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n");
	ft_sort_integer_table(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
	return (0);
}
