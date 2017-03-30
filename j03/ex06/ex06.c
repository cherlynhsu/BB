/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 11:28:04 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/13 11:45:35 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

int		main(void)
{
	char *str;
	int len;

	str = "abcdefgh";
	len = ft_strlen(str);
	printf("%d is the length of the string!\n", len);
	return (0);
}
