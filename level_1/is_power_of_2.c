/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:29:52 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/14 17:32:27 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	return ((n == 1) ? 1 : 0);
}
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc == 1)
		return(0);
	printf("is_power_of_2(\"%s\") = %d\n", argv[1], is_power_of_2(atoi(argv[1])));
	return(0);
}