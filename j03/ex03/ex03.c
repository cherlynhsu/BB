/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 18:56:10 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/12 19:08:52 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 15;
	b = 10;

	printf("%d,%d\n", a,b);

	ft_div_mod(a, b, &div, &mod);
	
	printf("%d,%d\n", div, mod);
	return (0);
}
