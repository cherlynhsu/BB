/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 13:46:26 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/17 14:18:39 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'a' + (str[i] - 'a' + 42) % 26;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'A' + (str[i] - 'A' + 42) % 26;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "hello";
	char str2[] = "HELLO";

	printf("%s\n", ft_rot42(str1));
	printf("%s\n", ft_rot42(str2));
	return (0);
}
