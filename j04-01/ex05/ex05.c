/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:18:18 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/18 13:53:50 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb && i < 46341)
	{
		i++;
	}
	if  (i * i == nb)
	{
		return (i);
	}
	return (0);
}

int	main(void)
{
	for (int i = -20; i < 250; i++)
	{
		printf("%d sqrt is %d\n", i, ft_sqrt(i));
	}
	return (0);
}
