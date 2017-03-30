/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 18:21:29 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/21 15:17:21 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

int			main(void)
{
	char dest1[20];
	char src1[20];
	char dest2[20];
	char src2[20];

	strcpy(src1, "Hello");
	strcpy(dest1, "Bonjour");
	strcpy(src2, "yoyo");
	strcpy(dest2, "YOYOYOYOYOYOYOYOYOY");
//	strlcat(dest1, src1, 15);
//	strlcat(dest2, src2, 15);

	printf("%lu\n", strlcat(dest1, src1, 8));
	printf("%s\n", dest1);
	printf("%d\n", ft_strlcat(dest1, src1, 8));
	printf("%s\n", dest1);
	printf("%lu\n", strlcat(dest2, src2, 20));
	printf("%s\n",dest2);
	printf("%d\n", ft_strlcat(dest2, src2, 19));
	printf("%s\n",dest2);
	return (0);
}
