#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int main (int ac, char **av)
{
	int		i = 0;

	if (ac > 1)
	{
		while (av[i])
			i++;
		ft_putnbr(i - 1);
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
