/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 13:25:43 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/12 18:43:00 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(void)
{
	int	n;
	
	n = 10;
	printf("n is now %d\n", n);
	ft_ft(&n);
	printf("After the operation, n is now %d\n", n);
	return (0);
}