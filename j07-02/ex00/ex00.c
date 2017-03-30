/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 15:55:48 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/22 18:18:15 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int j;
	char *str;

	if (!src)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (0);
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

int		main(void)
{
	char src[] = "Hello World !";
	char *str;

	str = strdup (src);
	printf("%s\n", str);

	char src2[] = "Hello World !";
	char *str2;

	printf("%s\n", ft_strdup(src2));
	return (0);
}

