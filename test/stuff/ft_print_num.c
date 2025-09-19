/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 23:57:35 by dcheng            #+#    #+#             */
/*   Updated: 2025/09/02 23:57:35 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = '0';
	while (alphabet <= '9')
	{
		write (1, &alphabet, 1);
		alphabet++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}