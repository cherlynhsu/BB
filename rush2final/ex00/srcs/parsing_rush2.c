/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_rush2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 13:45:55 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/26 13:45:56 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

t_input		*create_input_stock(int size)
{
	t_input		*input;

	input = (t_input *)malloc(sizeof(t_input));
	if (input == NULL)
		return (NULL);
	input->input_str = (char *)malloc(sizeof(char) * (size + 1));
	if (input->input_str == NULL)
		return (NULL);
	input->size = size;
	return (input);
}

t_input		*add_char_to_input_stock(t_input *input_old, char c)
{
	int			i;
	int			size;
	t_input		*input_new;

	size = input_old->size;
	input_new = create_input_stock(++size);
	if (input_new == NULL)
		return (NULL);
	i = -1;
	while (input_old->input_str[++i])
		input_new->input_str[i] = input_old->input_str[i];
	input_new->input_str[i] = c;
	input_new->input_str[++i] = '\0';
	free(input_old);
	return (input_new);
}

t_input		*input_parsing(void)
{
	char		buf[1];
	t_input		*input;

	input = create_input_stock(0);
	if (input == NULL)
		return (NULL);
	input->input_str[0] = '\0';
	while ((read(0, buf, 1)))
		input = add_char_to_input_stock(input, buf[0]);
	buf[0] = '\0';
	return (input);
}
