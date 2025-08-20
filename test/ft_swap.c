void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int	main(void)
{
	int a = 26;
	int b = 42;

	ft_swap(&a, &b);
	printf("a : %d\nb : %d\n", a, b);
}