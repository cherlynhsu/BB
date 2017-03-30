/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 14:59:11 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/27 15:16:44 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] =src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char src1[] = "Hello";
	char dest1[50];

	printf("Dest is now %s\n", strncpy(dest1, src1, 3));
	printf("ft Dest is now %s\n", ft_strncpy(dest1, src1, 3));

	char src2[] = "Monsieur";
	char dest2[50];

	printf("Dest is now %s\n", strncpy(dest2, src2, 5));
	printf("ft Dest is now %s\n", ft_strncpy(dest2,src2, 5));

	char src3[] = "Comment vas tu ?";
	char dest3[50];

	printf("Dest is now %s\n", strncpy(dest3, src3, 8));
	printf("ft Dest is now %s\n", ft_strncpy(dest3, src3, 8));
}
