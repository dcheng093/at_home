/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:53:35 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/26 00:06:25 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *) malloc(sizeof(int) * ((max - min)));
	if (min >= max)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i = 0;
	int	*range = ft_range(min, max);
	int	size = max - min;

	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}*/