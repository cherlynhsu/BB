/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 14:02:14 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/12 14:02:16 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_if_1(int j, int x)
{
	if (j == 1)
		ft_putchar('o');
	else if (j > 1 && j < x)
		ft_putchar('-');
	else if (j == x)
		ft_putchar('o');
	if (j == x)
		ft_putchar('\n');
}

void	ft_if_mid(int j, int x)
{
	if (j == 1 || j == x)
	{
		ft_putchar('|');
	}
	else if (j > 1 && j < x)
		ft_putchar(' ');
	if (j == x)
		ft_putchar('\n');
}

void	ft_if_y(int j, int x)
{
	if (j == 1)
		ft_putchar('o');
	else if (j > 1 && j < x)
		ft_putchar('-');
	else if (j == x)
		ft_putchar('o');
	if (j == x)
		ft_putchar('\n');
}

void	ft_logic(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (i == 1)
			{
				ft_if_1(j, x);
			}
			else if (i > 1 && i < y)
			{
				ft_if_mid(j, x);
			}
			else if (i == y)
			{
				ft_if_y(j, x);
			}
			j++;
		}
		i++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		ft_logic(x, y);
}
