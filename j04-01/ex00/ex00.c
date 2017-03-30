/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:29:59 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/15 17:53:04 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int ans;

	ans = nb;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	if ( nb == 1 || nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		ans = ans * (nb - 1);
		nb--;
	}
	return (ans);
}

int		main(void)
{
	for (int i = 0; i < 20; i++)
	{
		printf("%d! = %d\n", i, ft_iterative_factorial(i));
	}
	printf(("factorial of 4 is %d\n"), ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
}
