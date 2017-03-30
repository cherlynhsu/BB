/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arserkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 17:47:01 by arserkov          #+#    #+#             */
/*   Updated: 2017/03/11 17:53:55 by arserkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_n_last_line(int i, int x)
{
	if (i == 1)
		ft_putchar('A');
	else if (i > 1 && i < x)
		ft_putchar('B');
	else if (i == x)
		ft_putchar('C');
}

void	middle_line(int i, int x)
{
	if (i == 1 || i == x)
		ft_putchar('B');
	if (i > 1 && i < x)
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (j == 1)
				first_n_last_line(i, x);
			else if (j > 1 && j < y)
				middle_line(i, x);
			else
				first_n_last_line(i, x);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
