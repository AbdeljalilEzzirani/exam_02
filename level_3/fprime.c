/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:49:40 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/16 21:03:20 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
	int			number;
	int			calculeure;
	
	calculeure = 1;
	if (ac == 2)
	{
		number = atoi(av[1]);
		while (number >= ++calculeure)
		{
			if (number % calculeure == 0)
			{
				printf("%d", calculeure);
				if (number == calculeure)
					break;
				printf("*");
				number = number / calculeure;
				calculeure = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
