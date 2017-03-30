/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 16:06:30 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/27 18:34:01 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void	ft_show_tab(struct s_stock_par *par);

struct	s_stock_par	*ft_param_to_tab(int a, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	t_stock_par	*par;

	par = ft_param_to_tab(ac, av);
	ft_show_tab(par);
}
