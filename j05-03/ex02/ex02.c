/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:20:51 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/22 15:29:11 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int o;

	sign = 0;
	i = 0;
	o = 0;
	while ((str[i] == '\n' || str[i] == '\f'
		|| str[i]== '\v' || str[i] == '\t' || str[i] == '\r' || str[i] == ' '))
		i++;
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
	char *str6;
	char *str7;
	char *str8;

	str1 = "456";
	str2 = "-456789";
	str3 = "\n12345";
	str4 = "651-4655";
	str5 = "951+545";
	str6 = " 654";
	str7= "	684";
	str8= "+-4654";

	printf("str is %s, now is %d\n", str1, ft_atoi(str1));
	printf("str is %s, now is %d\n", str2, ft_atoi(str2));
	printf("str is %s, now is %d\n", str3, ft_atoi(str3));
	printf("str is %s, now is %d\n", str4, ft_atoi(str4));
	printf("str is %s, now is %d\n", str5, ft_atoi(str5));
	printf("str is %s, now is %d\n", str6, ft_atoi(str6));
	printf("str is %s, now is %d\n", str7, ft_atoi(str7));
	printf("str is %s, now is %d\n", str8, ft_atoi(str8));
	return (0);
}
