
// int ft_sqrt(int nb)
// {
// 	int	i;

// 	i = 2;
// 	while (nb >= i * i)
// 	{
// 		if (i * i == nb)
// 			return (i);
// 		i++;
// 	}
// 	return (0);
// }

// Sigma version O(logn)
int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	mid;

	left = 2;
	right = nb / 2;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}

#include <stdio.h>

int main() {
	printf("%d\n", ft_sqrt(16));
}