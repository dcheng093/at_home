/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:24:53 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/10 13:24:53 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int column, char first, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= column)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == column)
			ft_putchar(last);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	column;
	int	line;

	i = 1;
	column = x;
	line = y;
	if (column >= 1 && line >= 1)
	{
		while (i <= line)
		{
			if (i == 1)
				ft_print(column, 'o', '-', 'o');
			else if (i == line)
				ft_print(column, 'o', '-', 'o');
			else
				ft_print(column, '|', ' ', '|');
			i++;
		}
	}
}
