/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 00:29:18 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/27 00:29:18 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;
	i = 'z';
	while (i >= 'a')
	{
		write (1, &i, 1);
		i--;
	}
}

int	main(void)
{
	ft_print_alphabet();
}