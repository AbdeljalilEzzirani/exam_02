/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:45:57 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/15 00:13:33 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char * str, char c, int len)
{
	int			i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main (int ac, char  **av)
{
	int				i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	if (ac == 3)
	{
		while (av[1][i])
			i++;
		while (av[2][j])
		{
			av[1][i] = av[2][j];
			i++;
			j++;
		}
		i--;
		while (k <= i)
		{
			if (check(av[1], av[1][k], k))
				write (1, &av[1][k], 1);
			k++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
