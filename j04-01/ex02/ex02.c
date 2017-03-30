/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 14:00:53 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/14 14:26:10 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int a;

	a = nb;
	if (power < 0)
	{
		return (0);
	}
	if ( power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		a = a * nb;
		power--;
	}
	return (a);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(2,0));
	printf("%d\n", ft_iterative_power(2,1));
	return (0);
}
