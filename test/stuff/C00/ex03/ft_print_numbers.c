s/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:57:49 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/09 21:57:49 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while(number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}

int	main(void)
{
	ft_print_numbers();
}