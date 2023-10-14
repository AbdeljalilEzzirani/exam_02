/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:51:12 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/14 22:16:23 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	rslt;
	
	i = 7;
	while (i >= 0)
	{
		rslt = (octet >> i & 1) + 48;
		write(1, &rslt, 1);
		i--;
	}
}
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    unsigned char octet;

    if (argc == 2)
    {
        octet = atoi(argv[1]);
        print_bits(octet);
        printf("\n");
    }
    return 0;

}