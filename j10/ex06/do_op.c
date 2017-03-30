/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 19:01:57 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/30 18:46:14 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_check(char op)
{
	if (!(op == '+' || op == '-' || op == '*' || op == '%'))
	{
		ft_putstr("0\n");
		return (0);
	}
	return (1);
}

void		do_op(int a, int b, char op)
{
		if (op == '+')
			ft_putnbr(a + b);
		if (op == '-')
			ft_putnbr(a - b);
		if (op == '*')
			ft_putnbr(a * b);
		if (op == '/')
		{
			if (b == 0)
				ft_putstr("Stop : division by zero\n");
			else
				ft_putnbr(a / b);
		}
		if (op == '%')
		{
			if (b == 0)
				ft_putstr("Stop : modulo by zero\n");
			else
				ft_putnbr(a % b);
		}
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	
	if (argc == 4)
	{
		if (check(op) != 1)
			return (0);
		do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
		ft_putchar('\n');
	}
	return (0);
}
