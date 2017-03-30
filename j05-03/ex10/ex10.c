/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahsu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 16:42:20 by yahsu             #+#    #+#             */
/*   Updated: 2017/03/24 12:24:19 by yahsu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
		if (str[i - 1] < 'A' || (str[i - 1] > 'Z' && str[i - 1] < 'a') ||
				str[i - 1] > 'z')
		{
			if (str[i] >= 'a' && str[i] <= 'z' && (!(str[i - 1] >= '0' &&
							str[i - 1] <= '9')))
				str[i] -= 32;
			if(str[i] >= 'A' && str[i] <= 'Z' && (str[i - 1] >= '0' &&
						str[i - 1] <= '9'))
				str[i] += 32;
		}
	//	if (!(str[0]) && str[i] >= 'A' && str[i] <= 'Z')
	//		str[i] += 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char str1[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str1);
	printf("Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n");
	printf("%s\n", str1);
	
	char str2[] = "heLLo, i am at 42E3-r8-p7A";

	ft_strcapitalize(str2);
	printf("heLLo, i am at 42E3-r8-p7A\n");
	printf("%s\n", str2);

	printf("%s\n", ft_strcapitalize(argv[1]));

}
