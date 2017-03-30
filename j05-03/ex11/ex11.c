/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 19:20:01 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/20 13:14:02 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a')|| *str > 'z')
			i = i * 0;
		else
			i = i * 1;
		str++;
	}
	return (i);
}

int		main(void)
{
	char s1[] = "hello";
	char s2[] = "hell@o";
	char s3[] =  "";

	ft_str_is_alpha(s1);
	printf("%s -> %d\n", s1, ft_str_is_alpha(s1));
	ft_str_is_alpha(s2);
	printf("%s -> %d\n", s2, ft_str_is_alpha(s2));
	ft_str_is_alpha(s3);
	printf("%s -> %d\n", s3, ft_str_is_alpha(s3));
}
