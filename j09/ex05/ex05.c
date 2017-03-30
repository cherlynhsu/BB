/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:10:03 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/17 13:40:42 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_button(int i, int j, int k)
{
	if ((i >= j && j >= k) || (i <= j && j <= k))
	{
		return (j);
	}
	if ( (i >= k && j <= k) || (i <= k && j >= k))
	{
		return (k);
	}
//	if ((i >= j && i <= k) || (i <= j && i >= k))
	else
	{
		return (i);
	}
}
int		main(void)
{
	printf("%d\n", ft_button(24, 65, 5));
	printf("%d\n", ft_button(11, 15, 11));
	printf("%d\n", ft_button(1, 1, 1));
	printf("%d\n", ft_button(45, 90, -45));
}
