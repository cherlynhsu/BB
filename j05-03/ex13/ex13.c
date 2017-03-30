/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 12:39:04 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/20 12:45:02 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 1;
	if (*str == '\0')
		return (i);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
	char str1[] = "hello123";
	char str2[] = "hellobb";
	char str3[] = "HelloBB";
	char str4[] = "";
	char str5[] = "bonjour@bb";
	char str6[] = "rifir-fjfu";

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
