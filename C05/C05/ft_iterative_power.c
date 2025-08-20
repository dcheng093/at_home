
int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;
	
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	i = 0;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

// #include <stdio.h>

// int	main() {
// 	printf("%d\n", ft_iterative_power(2, 3));
// }