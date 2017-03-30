/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 09:53:19 by pkirsch           #+#    #+#             */
/*   Updated: 2017/03/11 09:53:25 by pkirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int i, int j);

int		ft_number(char const *str, int i, int number, int is_negative)
{
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		number = (number) * 10 + (*(str + i) - '0');
		i++;
		if (*(str + i) < '0' || *(str + i) > '9')
		{
			if (is_negative)
				number = -(number);
			return (number);
		}
	}
	return (number);
}

int		ft_atoi(char const *str)
{
	int i;
	int is_negative;
	int number;

	i = 0;
	is_negative = 0;
	number = 0;
	while (*(str + i) == ' ' || *(str + i) == '\f' || *(str + i) == '\n' ||
	*(str + i) == '\r' || *(str + i) == '\t' || *(str + i) == '\v')
		i++;
	if (*(str + i) == '-')
	{
		is_negative = 1;
		i++;
	}
	else if (*(str + i) == '+')
		i++;
	return (ft_number(str, i, number, is_negative));
}

int		main(int argc, char const *argv[])
{
	if (argc > 2)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		rush(5, 3);
	return (0);
}
