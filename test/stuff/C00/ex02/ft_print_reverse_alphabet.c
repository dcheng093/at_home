/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:51:49 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/09 21:51:49 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char alphabet;

	alphabet = 'z';
	while(alphabet >= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}