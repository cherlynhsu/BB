/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 14:51:23 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/30 18:09:43 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	if (!src)
		return (0);
	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (0);
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*struct1;
	t_stock_par	*struct2;

	struct1 = (t_stock_par*)malloc(sizeof(*struct1) * (ac + 2));
	struct2 = struct1;
	i = 0;
	while (i < ac)
	{
		struct2->copy = ft_strdup(av[i]);
		struct2->str = av[i];
		struct2->tab = ft_split_whitespaces(av[i]);
		struct2->size_param = ft_strlen(av[i]);
		struct2++;
		i++;
	}
	struct2->str = 0;
	return (struct1);
}
