/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:11:45 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/12 19:38:10 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	
	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

int		main(void)
{
	int a;
	int b;

	a = 15;
	b = 10;

	printf("%d, %d\n", a,b);

	ft_ultimate_div_mod(&a, &b);
	
	printf("%d, %d\n", a, b);
	return (0);
}
