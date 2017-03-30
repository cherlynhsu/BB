/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 20:44:31 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/26 20:44:31 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

void	ft_match_rush00(int rush_nbr, int cols, int rows)
{
	ft_putstr("[rush-0");
	ft_putnbr(rush_nbr);
	ft_putstr("] [");
	ft_putnbr(cols);
	ft_putstr("] [");
	ft_putnbr(rows);
	ft_putstr("]");
}

void	ft_print_separator(void)
{
	ft_putstr(" || ");
}

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		ft_putchar(str[i]);
	}
}
