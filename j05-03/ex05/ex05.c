/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 15:16:33 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/20 16:48:21 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *p1;
	char *p2;

	if (to_find[0] == '\0')
		return (str);
	while (1)
	{
		if (*str == *to_find)
		{
			p1 = str;
			p2 = to_find;
			while (1)
			{
				if (!*p2)
					return (str);
				if (*p1++ != *p2++)
					break ;
			}
		}
		if (*str != '\0')
			str++;
		else
			break ;
	}
	return (NULL);
}

int			main(void)
{
	char str1[] = "Hello BB I am Cherlyn";
	char to_find1[] = "BB";
	char str2[] = "Hello BB I am Cherlyn";
	char to_find2[] = "Richie";
	char str3[] = "Hello BB I am Cherlyn";
	char to_find3[] = "";

	printf("find BB-> %s\n", strstr(str1, to_find1));
	printf("find BB-> %s\n", ft_strstr(str1, to_find1));
	printf("find Richie-> %s\n", strstr(str2, to_find2));
	printf("find Richie-> %s\n", ft_strstr(str2, to_find2));
	printf("find  ->%s\n", strstr(str3, to_find3));
	printf("find  ->%s\n", ft_strstr(str3, to_find3));
}
