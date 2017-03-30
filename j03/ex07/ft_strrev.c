/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 11:47:32 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/13 16:37:02 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	*ft_strrev(char *str)
{
	int		a;
	int		b;
	int		len;
	char	temp;

	len = 0;
	a = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	b = len - 1;
	while (a < b)
	{
		temp = str[a];
		str[a] = str[b];
		str[b] = temp;
		a++;
		b--;
	}
	return (str);
}
