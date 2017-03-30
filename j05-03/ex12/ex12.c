/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 12:28:40 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/20 13:15:52 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			i = i * 1;
		}
		else
			i = 0;
		str++;
	}
	return (i);
}

int		main(void)
{
	char str1[] = "65464ewd654";
	char str2[] = "123456789";
	char str3[] = "464@54";
	char str4[] = "";

	ft_str_is_numeric(str1);
	ft_str_is_numeric(str2);
	ft_str_is_numeric(str3);
	ft_str_is_numeric(str4);
	printf("%s -> %d\n", str1, ft_str_is_numeric(str1));
	printf("%s -> %d\n", str2, ft_str_is_numeric(str2));
	printf("%s -> %d\n", str3, ft_str_is_numeric(str3));
	printf("%s -> %d\n", str4, ft_str_is_numeric(str4));
}
