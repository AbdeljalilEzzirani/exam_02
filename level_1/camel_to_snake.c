/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:17:16 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/13 17:45:20 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int ac, char **av)
{
    int			i;

	i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				write(1, "_", 1);
				av[1][i] = av[1][i] + 32;
			}
			write(1, &av[1][i], 1);
			i++;
		}
    }
    write(1, "\n", 1);
    return (0);
}