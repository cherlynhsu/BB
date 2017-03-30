/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 20:46:18 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/26 20:46:20 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

void	ft_everything_is_solution(void)
{
	int i;

	i = -1;
	while (++i < 5)
	{
		ft_match_rush00(i, 0, 0);
		if (i != 4)
			ft_print_separator();
	}
	ft_putchar('\n');
}

int		ft_is_nothing(t_input *input)
{
	int i;

	i = -1;
	while (input->input_str[++i])
	{
		if (input->input_str[i] != 'o' && input->input_str[i] != '-'
			&& input->input_str[i] != 'A' && input->input_str[i] != 'B'
			&& input->input_str[i] != 'C' && input->input_str[i] != '\n'
			&& input->input_str[i] != '*' && input->input_str[i] != '|'
			&& input->input_str[i] != '/' && input->input_str[i] != '\\'
			&& input->input_str[i] != ' ')
			return (1);
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
