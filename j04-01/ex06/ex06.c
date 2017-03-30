/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:39:04 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/16 12:24:44 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int i;
	
	i = 3;
	if ( nb < 2)
		return (0);
	if (nb == 2 || nb ==3)
		return(1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(19));
	printf("%d\n", ft_is_prime(23));
	printf("%d\n", ft_is_prime(29));
	printf("%d\n", ft_is_prime(31));
	printf("%d\n", ft_is_prime(37));
	printf("%d\n", ft_is_prime(41));
	printf("%d\n", ft_is_prime(43));
	printf("%d\n", ft_is_prime(47));
	printf("%d\n", ft_is_prime(53));
	printf("%d\n", ft_is_prime(59));
	printf("%d\n", ft_is_prime(61));
	printf("%d\n", ft_is_prime(67));
	printf("%d\n", ft_is_prime(71));
	printf("%d\n", ft_is_prime(73));
	printf("%d\n", ft_is_prime(79));
	printf("%d\n", ft_is_prime(83));
	printf("%d\n", ft_is_prime(89));
	printf("%d\n", ft_is_prime(97));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(20));
	printf("%d\n", ft_is_prime(30));
	printf("%d\n", ft_is_prime(40));
	return (0);
}
