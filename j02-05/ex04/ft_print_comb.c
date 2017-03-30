/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 18:16:37 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/12 16:06:45 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

void	ft_printxyz(int x, int y, int z)
{
	ft_putchar(48 + x);
	ft_putchar(48 + y);
	ft_putchar(48 + z);
}

void	ft_if(int x, int y, int z)
{
	if (!(x == 7 && y == 8 && z == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_printxyz(x, y, z);
				ft_if(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
