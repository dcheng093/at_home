#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2) // must have exactly 1 argument after program name
	{
		i = 0;
		// skip leading spaces/tabs
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		// print until space/tab/end of string
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
