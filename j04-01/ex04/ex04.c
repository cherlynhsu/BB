/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 14:42:02 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/14 15:09:44 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	else
	{
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(-5));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(18));
	return (0);
}
