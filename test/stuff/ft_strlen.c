#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char *str = "Hello";
	int	length;

	length = ft_strlen(str);
	printf("length : %d\n", length);
}