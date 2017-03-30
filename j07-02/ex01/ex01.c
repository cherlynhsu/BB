/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:05:14 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/29 20:27:58 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *array;
	long		i;
	long		j;

	if (min >= max)
		return (0);
	array = (int*)malloc(sizeof(*array) * (max - min));
	if (!array)
		return (0);
	i = 0;
	j = min;
	while (j < max)
	{
		array[i] = j;
		i++;
		j++;
	}
	return (array);
}

int		main(int argc, char **argv)
{
	int min;
	int max;
	long i;
	int *tab;

	max = atoi(argv[2]);
	min = atoi(argv[1]);
	i = 0;
	if (argc == 3)
	{
		tab = ft_range(min, max);
		while (i < max - min)
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
	return (0);
}
