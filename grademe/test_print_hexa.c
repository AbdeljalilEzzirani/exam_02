#include <unistd.h>

int	ft_atoi(char *string)
{
	int		i = 0;
	int		result = 0;
	while (string[i] >= '0' && string[i] <= '9')
	{
		result  = (result * 10) + (string[i] - 48);
		i++;
	}
	return (result);
}

void	ft_print_hex(int number)
{
	char			hexa_decimal[]="0123456789abcdef";

	if (number >= 16)
		ft_print_hex(number / 16);
	write (1, &hexa_decimal[number % 16], 1);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_print_hex(ft_atoi(av[1]));
	}
	write (1, "\n", 1);
	return (0);
}
