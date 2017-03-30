/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:23:05 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/21 16:24:17 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int		main(void)
{
	char src1[20];
	char dest1[20];
	char src2[20];
	char dest2[20];

	strcpy(src1, "Hellosunshine");
	strcpy(src2, "Bonjour");
//	strlcpy(dest1, scr1, 15);
//	strlcpy(dest2, src2, 8);

	printf("%lu\n", strlcpy(dest1, src1, 15));
	printf("%s\n", dest1);
	printf("%u\n", ft_strlcpy(dest1, src1, 15));
	printf("%s\n", dest1);
	printf("%lu\n", strlcpy(dest2, src2, 5));
	printf("%s\n", dest2);
	printf("%u\n", ft_strlcpy(dest2, src2, 5));
	printf("%s\n", dest2);
	return (0);
}
