/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 14:05:27 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/12 14:05:29 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_if_1(int j, int x)
{
	if (j == 1)
		ft_putchar('A');
	else if (j > 1 && j < x)
		ft_putchar('B');
	else if (j == x)
		ft_putchar('A');
	if (j == x)
		ft_putchar('\n');
}

void	ft_if_mid(int j, int x)
{
	if (j == 1 || j == x)
	{
		ft_putchar('B');
	}
	else if (j > 1 && j < x)
		ft_putchar(' ');
	if (j == x)
		ft_putchar('\n');
}

void	ft_if_y(int j, int x)
{
	if (j == 1)
		ft_putchar('C');
	else if (j > 1 && j < x)
		ft_putchar('B');
	else if (j == x)
		ft_putchar('C');
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
