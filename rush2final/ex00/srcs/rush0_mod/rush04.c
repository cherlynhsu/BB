/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arserkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 14:14:35 by arserkov          #+#    #+#             */
/*   Updated: 2017/03/11 17:05:15 by arserkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

static void		ft_if_1(int j, int x, t_output *output, int index)
{
	if (j == 1)
		output->output_str[index] = 'A';
	else if (j > 1 && j < x)
		output->output_str[index] = 'B';
	else if (j == x)
		output->output_str[index] = 'C';
}

static void		ft_if_mid(int j, int x, t_output *output, int index)
{
	if (j == 1 || j == x)
		output->output_str[index] = 'B';
	else if (j > 1 && j < x)
		output->output_str[index] = ' ';
}

static void		ft_if_y(int j, int x, t_output *output, int index)
{
	if (j == 1)
		output->output_str[index] = 'C';
	else if (j > 1 && j < x)
		output->output_str[index] = 'B';
	else if (j == x)
		output->output_str[index] = 'A';
}

static void		ft_logic(int x, int y, t_output *output)
{
	int i;
	int j;
	int	index;

	index = 0;
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (i == 1)
				ft_if_1(j, x, output, index);
			else if (i > 1 && i < y)
				ft_if_mid(j, x, output, index);
			else if (i == y)
				ft_if_y(j, x, output, index);
			index++;
			j++;
		}
		output->output_str[index] = '\n';
		index++;
		i++;
	}
	output->output_str[index] = '\0';
}

t_output		*rush04(int x, int y)
{
	t_output		*output;

	output = create_output((x + 1) * y);
	if (output == NULL)
		return (NULL);
	if (x > 0 && y > 0)
		ft_logic(x, y, output);
	return (output);
}
