/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 16:34:24 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/26 16:34:25 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

int		ft_row_count(t_input *input)
{
	int i;
	int row_count;

	i = -1;
	row_count = 1;
	while (input->input_str[++i])
		if (input->input_str[i] == '\n')
			row_count++;
	return (row_count - 1);
}

int		ft_col_count(t_input *input)
{
	int i;
	int col_count;

	i = -1;
	col_count = 1;
	while (input->input_str[++i] && input->input_str[i] != '\n')
		col_count++;
	return (col_count - 1);
}

void	ft_compare(t_input *input)
{
	int			rows;
	int			cols;

	rows = ft_row_count(input);
	cols = ft_col_count(input);
	if (ft_is_nothing(input))
	{
		ft_putstr("aucune\n");
		return ;
	}
	if (input->input_str[0] == '\0' || rows == 0 || cols == 0)
	{
		ft_everything_is_solution();
		return ;
	}
	ft_compare_next(input, cols, rows);
}

void	ft_compare_next(t_input *input, int cols, int rows)
{
	int			matchs[5];
	int			i;
	t_output	*output[5];

	i = -1;
	while (++i < 5)
		output[i] = rush0(cols, rows, i);
	i = -1;
	while (++i < 5)
		if (output[i] == NULL)
			return ;
	i = -1;
	while (++i < 5)
	{
		if (ft_strcmp(output[i]->output_str, input->input_str) == 0)
			matchs[i] = 1;
		else
			matchs[i] = 0;
	}
	ft_message_display(matchs, rows, cols);
}

void	ft_message_display(int *matchs, int rows, int cols)
{
	int first;
	int i;
	int is_match;

	first = 1;
	i = -1;
	is_match = 0;
	while (++i < 5)
	{
		if (matchs[i] == 1)
		{
			is_match = 1;
			if (first != 1)
			{
				ft_print_separator();
			}
			first = 0;
			ft_match_rush00(i, cols, rows);
		}
	}
	if (!is_match)
		ft_putstr("aucune");
	ft_putstr("\n");
}
