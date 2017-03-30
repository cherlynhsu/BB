/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 19:21:41 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/11 20:38:47 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar (char n)
{
	write(1, &n, 1);
	return(0);
}

void	 ft_if(int a, int b)
{ 
	if(!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print2digits(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
	else
	{
		ft_putchar(48 + n / 10);
		ft_putchar(48 + n % 10);
	}
}


void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;

	while (a <= 98)
	{
		while (a < b && b <= 99)
		{
			ft_print2digits(a);
			ft_putchar(' ');
			ft_print2digits(b);
			ft_if(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_comb2();
}
