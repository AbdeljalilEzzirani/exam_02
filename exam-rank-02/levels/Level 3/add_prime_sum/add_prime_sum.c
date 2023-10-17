#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res = 0;

	while (*s)
		res = res * 10 + *s++ - 48;
	return (res);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{

	if (ac == 2)
	{
		int	nbr = ft_atoi(av[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}

*********************************************************************
*********************************************************************
*********************************************************************



#include <unistd.h>

int		ft_atoi(char *str)
{
	int n = 0;

	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		++str;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int		is_prime(int n)
{
	int i = 2;

	while (i < n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int		add_prime_sum(int n)
{
	int sum = 0;
	int i = 2;

	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum += i;
		++i;
	}
	return (sum);
}

int		main(int argc, char **argv)
{
	int n;

	if (argc == 2 && (n = ft_atoi(argv[1])))
		ft_putnbr(add_prime_sum(n));
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
