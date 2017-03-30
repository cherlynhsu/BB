/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 12:54:36 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/20 13:07:40 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 1;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
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
	char str1[] = "\x08\xDE\xAD";
	char str2[] = "helloBB";
	char str3[] = "HELLOBB";
	char str4[] = "";
	char str5[] = "BB@BB";
	char str6[] = "HHHHH123";

	ft_str_is_printable(str1);
	ft_str_is_printable(str2);
	ft_str_is_printable(str3);
	ft_str_is_printable(str4);
	ft_str_is_printable(str5);
	ft_str_is_printable(str6);

	printf("%s -> %d\n", str1, ft_str_is_printable(str1));
	printf("%s -> %d\n", str2, ft_str_is_printable(str2));
	printf("%s -> %d\n", str3, ft_str_is_printable(str3));
	printf("%s -> %d\n", str4, ft_str_is_printable(str4));
	printf("%s -> %d\n", str5, ft_str_is_printable(str5));
	printf("%s -> %d\n", str6, ft_str_is_printable(str6));
}
