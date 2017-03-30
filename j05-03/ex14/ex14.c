/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 12:47:49 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/20 13:18:05 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char str1[] = "HELLO123";
	char str2[] = "helloBB";
	char str3[] = "HELLOBB";
	char str4[] = "";
	char str5[] = "BB@BB";
	char str6[] = "HHHHH123";

	ft_str_is_lowercase(str1);
	ft_str_is_lowercase(str2);
	ft_str_is_lowercase(str3);
	ft_str_is_lowercase(str4);
	ft_str_is_lowercase(str5);
	ft_str_is_lowercase(str6);

	printf("%s -> %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s -> %d\n", str2, ft_str_is_lowercase(str2));
	printf("%s -> %d\n", str3, ft_str_is_lowercase(str3));
	printf("%s -> %d\n", str4, ft_str_is_lowercase(str4));
	printf("%s -> %d\n", str5, ft_str_is_lowercase(str5));
	printf("%s -> %d\n", str6, ft_str_is_lowercase(str6));
}
