/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 14:28:44 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/14 14:36:11 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		 return (nb * ft_recursive_power(nb, power -1));
	}
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(2,0));
	printf("%d\n", ft_recursive_power(2,1));
	printf("%d\n", ft_recursive_power(2, -10));
	return (0);
}
