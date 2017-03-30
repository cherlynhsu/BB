/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 19:01:57 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/30 18:28:45 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
	
int		ft_atoi(char *str)
{
	int i;
	int sign;
	int o;

	sign = 0;
	i = 0;
	o = 0;
	while ((str[i] == ' ' || str[i] == '\n'||str[i] == '\f'
				|| str[i] == '\t' || str[i] == '\v' || str[i] == '\n'))
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

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void		do_op(int a, int b, char op)
{
	ft_putstr("a and b and op are:\n");
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putchar(op);
	
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
		do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
	}
}
