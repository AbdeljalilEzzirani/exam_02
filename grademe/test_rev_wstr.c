#include <unistd.h>
#include <stdio.h>

int main (int ac, char **av)
{
	int		i = 0;
	int		end;
	int		star;
	int		flag;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			star = i + 1;
			flag = star;
			while (star <= end)
			{
				write (1, &av[1][star], 1);
				star++;
			}
			if (flag != 0)
			{
				write (1, " ", 1);
			}
		}
	}
	write (1, "\n", 1);
}