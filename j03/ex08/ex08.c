/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:59:11 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/15 16:58:06 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int o;
	int sign;

	i = 0;
	sign = 0;
	o = 0;
	while((str[i] == '\n' || str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\t'))
	{
		i++;
	}
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		o = 10 * o + str[i] - '0';
		i++;
	}
	return (sign == 1 ? o * (-1) : o);
}

int		main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;

	str1 = "456";
	str2 = "-57484";
	str3 = "\n12345";
	str4 = "548r55";
	str5 = "123456";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
	return (0);
}
	
