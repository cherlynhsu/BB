/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:05:14 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/29 20:28:52 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*array;
	long	i;
	int		j;

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
