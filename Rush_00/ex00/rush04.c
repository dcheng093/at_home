/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 22:08:33 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/09 22:08:33 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int column, char first, char between, char last)
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
			ft_putchar(between);
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
				ft_print(column, 'A', 'B', 'C');
			else if (i == line)
				ft_print(column, 'C', 'B', 'A');
			else
				ft_print(column, 'B', ' ', 'B');
			i++;
		}
	}
}
