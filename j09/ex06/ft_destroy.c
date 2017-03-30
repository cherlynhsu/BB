/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 15:02:31 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/17 15:17:43 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (factory[a])
	{
		while (factory[a][b])
		{
			free(factory[a][b]);
			b++;
		}
		free(factory[a]);
		a++;
	}
	free(factory);
}
