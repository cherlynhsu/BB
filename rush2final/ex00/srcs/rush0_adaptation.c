/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0_adaptation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 20:48:09 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/26 20:48:11 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2.h"

t_output	*create_output(int size)
{
	t_output	*output;

	output = (t_output *)malloc(sizeof(t_output));
	if (output == NULL)
		return (NULL);
	output->output_str = (char *)malloc(sizeof(char) * (size + 1));
	if (output->output_str == NULL)
		return (NULL);
	output->size = size;
	return (output);
}

t_output	*rush0(int x, int y, int rush_ref)
{
	t_output	*output;

	output = NULL;
	if (rush_ref == 0)
		output = rush00(x, y);
	else if (rush_ref == 1)
		output = rush01(x, y);
	else if (rush_ref == 2)
		output = rush02(x, y);
	else if (rush_ref == 3)
		output = rush03(x, y);
	else if (rush_ref == 4)
		output = rush04(x, y);
	if (output == NULL)
		return (NULL);
	return (output);
}
