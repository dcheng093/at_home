/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:50:20 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/14 16:50:20 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "HELLO";
	char	str3[] = "aBc123";
	char	str4[] = "lower";

	printf("BEFORE : %s\n", str1);
	printf("BEFORE : %s\n", str2);
	printf("BEFORE : %s\n", str3);
	printf("BEFORE : %s\n", str4);
	printf("AFTER : %s\n", ft_strlowcase(str1));
	printf("AFTER : %s\n", ft_strlowcase(str2));
	printf("AFTER : %s\n", ft_strlowcase(str3));
	printf("AFTER : %s\n", ft_strlowcase(str4));
}
