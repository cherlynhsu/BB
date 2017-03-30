/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 15:59:30 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/11 16:31:39 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void	ft_print_reverse_alphabet(void)
{
	char c;
	
	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	 }
}
int	main(void)
{
	ft_print_reverse_alphabet();
}
