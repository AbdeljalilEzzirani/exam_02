/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:05:18 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/17 17:21:15 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_putnbr(int number)
{
	int			fact;

	fact = 1;
	if (number < M)
	if (number < 0)
	{
		number = number * -1;
		ft_putchar('-');		
	}
	if (number > 10)
		ft_putnbr(number / 10);
	ft_putchar(((number % 10) * fact) + 48);
	return (0);
}

int main ()
{
	int		i;
	
	i = -220;
	ft_putnbr(i);
}