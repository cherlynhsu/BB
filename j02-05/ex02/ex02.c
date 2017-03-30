/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 16:59:50 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/13 11:09:49 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_number(void)
{
		char i;

		i = '0';
		while ( i <= '9')
		{
			ft_putchar(i);
			i++;
		}
}

int main(void)
{
	ft_print_number();
}
