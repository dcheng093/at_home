/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:42:36 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/11 20:57:17 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int    ft_putstr(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
	{
		write (1, &str[i], 1);
        i++;
	}
    return (i);
}

/*int    main(void)
{
    char    *str = "Hello";
	
	ft_putstr(str);
}*/