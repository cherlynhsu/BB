/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 11:58:04 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/19 18:36:15 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if (*s1 == *s2)
		return(nmatch(s1 + 1, s2 + 1));
	else
		return (0);
}

int		main(void)
{
	char s1[] = "abcbd";
	char s2[] = "*b*";

	nmatch(s1, s2);
	printf("%d\n", nmatch(s1, s2));

	char s3[] = "abc";
	char s4[] = "a**";

	nmatch(s3, s4);
	printf("%d\n", nmatch(s3, s4));
}
