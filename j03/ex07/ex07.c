/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 11:47:32 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/14 17:25:56 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	*ft_strrev(char *str)
{
	int a;
	int b;
	int len;
	char temp;

	len = 0;
	a = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	b = len - 1;
	while (a < b)
	{
		temp = str[a];
		str[a] = str[b];
		str[b] = temp;
		a++;
		b--;
	}
	return (str);
}

int		main(void)
{
	char str[] = "hellorichiebb";

	printf("%s\n", ft_strrev(str));
	return (0);
}
