/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:50:08 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/14 14:21:07 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int main (int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '%')
			printf("%d", atoi(av[1]) % atoi(av[3]));
		if (av[2][0] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
		if (av[2][0] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		if (av[2][0] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
		if (av[2][0] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
	}
	write (1, "\n", 1);
	return (0);
}