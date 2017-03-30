/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 13:11:28 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/21 13:04:53 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else 
	{
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
		{
			ft_putchar(nb + 48);
		}
	}
}

int		main(void)
{
	int i;

	for(i = -10 ; i < 200 ; i++)
	{
		ft_putnbr(i);
		ft_putchar('\n');
	}
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
}
