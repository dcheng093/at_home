/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 00:35:21 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/15 00:35:21 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
		return;
	}
	write (1, "N", 1);
}

int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(10);
	ft_is_negative(-9);
	return (0);
}