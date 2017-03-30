/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:54:06 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/24 14:18:38 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i= 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_check( char *base)
{
	int i;
	int j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (i < ft_strlen(base) && base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return(0);
		j = i + 1;
		while ( j < ft_strlen(base) && base[j] != '\0')
		{
			if (base[i]  == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_check(base) == 1)
	{
		if (nbr < 0)
		{
			nbr = - nbr;
			ft_putchar('-');
		}
		if (nbr >= ft_strlen(base))
		{
			ft_putnbr_base(nbr / ft_strlen(base), base);
			ft_putnbr_base(nbr % ft_strlen(base), base);
		}
		else
			ft_putchar(base[nbr]);
	}
	else 
		return;
}

int		main(int argc, char **argv)
{
	int i;

	if (argc  == 2)
	{
		for (i = -20; i < 50 ; i++)
		{
			ft_putnbr_base(i, argv[1]);
			ft_putchar('\n');
		}
	}
	return (0);
}
