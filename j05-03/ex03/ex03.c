/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:57:31 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/16 16:40:17 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char src[] = "Hello sunshine Monsieur Li";
	char dest[20];

	ft_strcpy(dest, src);
	printf(" Dest is now %s\n", dest);

	char src2[] = "Hello sunshie Monsieur Li";
	char dest2[50];

	strcpy(dest2, src2);
	puts(dest2);

	return (0);
}
