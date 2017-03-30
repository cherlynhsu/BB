/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:57:20 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/24 13:49:20 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n - 1) && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

int		main(void)
{
	char a[] = "abcdefg";
	char b[] = "abcidoijde";
	char c[] = "123456";
	char d[] = "234";

	printf("%s, %s, %d\n", a, b, strncmp(a, b, 5));
	printf("ft:%s, %s\n, %d\n", a, b, ft_strncmp(a, b, 5));
	printf("%s, %s, %d\n", c, d, strncmp(c, d, 2));
	printf("ft:%s, %s\n, %d\n", c, d, ft_strncmp(c, d, 2));
	printf("%s, %s, %d\n", "ab", "aa", strncmp("ab", "aa",1));
	printf("ft:%s, %s\n, %d\n", "ab", "aa", ft_strncmp("ab", "aa", 1));
	printf("%s, %s, %d\n", "112233", "113344", strncmp("112233", "113344", 5));
	printf("ft:%s, %s\n, %d\n", "112233", "113344", ft_strncmp("112233", "113344", 5));
	}

