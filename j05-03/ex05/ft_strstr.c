/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 15:16:33 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/22 18:08:02 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *p1;
	char *p2;

	if (to_find[0] == '\0')
		return (str);
	while (1)
	{
		if (*str == *to_find)
		{
			p1 = str;
			p2 = to_find;
			while (1)
			{
				if (!*p2)
					return (str);
				if (*p1++ != *p2++)
					break ;
			}
		}
		if (*str != '\0')
			str++;
		else
			break ;
	}
	return (0);
}
