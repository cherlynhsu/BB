/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 12:10:03 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/17 13:41:49 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((i >= j && j >= k) || (i <= j && j <= k))
	{
		return (j);
	}
	if ((i >= k && j <= k) || (i <= k && j >= k))
	{
		return (k);
	}
	else
	{
		return (i);
	}
}
