/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 13:51:53 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/15 17:51:50 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		return ( nb * ft_recursive_factorial(nb - 1));
		nb--;
	}
}

int		main(void)
{
	for (int i = 0; i < 20; i++)
	{
	printf("%d! = %d\n", i, ft_recursive_factorial(i));
	}
	return (0);
}
