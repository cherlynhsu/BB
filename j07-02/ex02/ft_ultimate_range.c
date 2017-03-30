/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 11:14:19 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/28 13:50:22 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *tab;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	len = max - min;
	tab = (int*)malloc(sizeof(int) * (len));
	if (!tab)
	{
		tab = (void *)0;
		return (0);
	}
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (len);
}
