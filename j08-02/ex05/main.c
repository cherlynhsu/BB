/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 16:06:30 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/27 18:38:29 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void	ft_show_tab(struct s_stock_par *par);

struct	s_stock_par	*ft_param_to_tab(int a, char **av);

int		main(int ac, char **av)
{
	ft_show_tab(ft_param_to_tab(ac, av));
}
