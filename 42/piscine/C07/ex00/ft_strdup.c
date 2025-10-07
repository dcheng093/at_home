/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:27:52 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/07 07:55:27 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char
		*dup;

	i = 0;
	while (src[i])
		i++;
	dup = (char *) malloc(i * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int main(void)
{
	char	*src = "poop";
	char	*dup = ft_strdup(src);

	printf("Before:\n");
	printf("src: %s\n", src);
	printf("dup: %s\n", dup);

	dup[0] = 'b';

	printf("\nAfter modifying dup:\n");
	printf("src: %s\n", src);
	printf("dup: %s\n", dup);

	free(dup);
}
