/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:13:02 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/21 13:32:51 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int			main(void)
{
	char src[50], dest[50];
	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	strcat(dest, src);
	printf("Final destination string : |%s|\n", dest);

	char src2[50], dest2[50];
	strcpy(src2,  "This is source");
	strcpy(dest2, "This is destination");
	ft_strcat(dest2, src2);
	printf("Final destination string : |%s|\n", dest2);

}
