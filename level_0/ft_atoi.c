/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:24:05 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/17 17:55:53 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int			fact;
	int			i;
	int			result;

	fact = 1;
	i = 0;
	result = 0;
	if (str[i] == '-')
	{
		fact = fact * -1;
		i++;
	}
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	printf ("here --> %d\n\n", result);
	return (result * fact);
}

int	main ()
{
	char str[]="-735";
	printf("----> My :  %d\n\n", ft_atoi(str));
	printf ("----> system :  %d", atoi(str));
}
