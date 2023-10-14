

#include <unistd.h>

int	main(void)
{
	int		i;
	int		j;
	int		a;

	i = 1;
	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else if (i > 10)
		{
			a = i / 10 + 48;
			j = i % 10 + 48;
			write(1, &a, 1);
			write(1, &j, 1);
		}
		else
		{
			j = i + 48;
			write(1, &j, 1);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
