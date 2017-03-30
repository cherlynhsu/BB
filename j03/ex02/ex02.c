/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 18:49:16 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/12 19:39:21 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int*a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;

	printf("original pair: %d, %d\n", a,b);

	ft_swap(&a, &b);

	printf("modified pair: %d, %d\n", a,b);
	return (0);
}
