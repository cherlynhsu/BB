/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 16:43:16 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/29 20:31:14 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

int		ft_totallen(int argc, char **argv)
{
	int totallen;
	int a;

	totallen = 0;
	a = 1;
	while (a < argc)
	{
		totallen += ft_strlen(argv[a]) + 1;
		a++;
	}
	return (totallen);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	int		k;

	str = (char*)malloc(sizeof(*str) * (ft_totallen(argc, argv)));
	if (!str)
		return (void*)0;
	j = 0;
	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i] != '\0')
		{
			str[j++] = argv[k][i];
			i++;
		}
		if (k < argc - 1)
			str[j++] = '\n';
		k++;
	}
	str[j] = '\0';
	return (str);
}
