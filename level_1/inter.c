/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:41:58 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/14 16:12:14 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str, char c, int len_or_nbr)
{
	int				i;

	i = 0;
	while (str[i] && (i < len_or_nbr || len_or_nbr == -1))
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int main (int ac, char **av)
{
	int			i;

	i = 0;
	if (ac == 3)
	{	
		while (av[1][i])
		{
			if ((check(av[1], av[1][i], i) == 0) && (check(av[2], av[1][i], -1) == 1))
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}