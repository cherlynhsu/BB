/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 11:57:41 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/19 18:14:22 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else
		return (0);
}

void	test(char *s1, char *s2)
{
	if (match(s1, s2) == 1)
		ft_putchar('1');
	else
		ft_putchar('0');
	ft_putchar('\n');
}

int		main(void)
{
	test("main.c", "*.c");
	test("main", "*.c");
	test("main.c", "m*i.c");
	test(" main.c", "*ain.c");
}
