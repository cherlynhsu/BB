/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 12:54:36 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/20 13:08:43 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 1;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			i = i * 1;
		}
		else
			i = 0;
		str++;
	}
	return (i);
}
