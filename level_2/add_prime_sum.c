/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:28:35 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/15 20:28:31 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int			i;
	int			result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int number)
{
	if (number > 9)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + 48);
}

int	ft_is_prime(int number)
{
	int			i;

	i = 2;
	if (number <= 1)
		return (0);
	while (i * i <= number)
	{
		if (number % i == 0)
			return (0);
	}
}

int	main (int ac, char **av)
{
	int			number;
	int			result;

	number = ft_atoi(av[1]);
	result = 0;
	if (ac == 2)
	{
		while (number >= 2)
		{
			if (ft_is_prime(number))
			{
				result = result + number;
				ft_putnbr(result);
			}
			number--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
