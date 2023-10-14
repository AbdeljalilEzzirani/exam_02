/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:20:12 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/15 00:39:35 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

void ft_putstr(char const *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int main (int ac, char **av)
{
    int         i;
    int         j;
    int         k;

    i = 0;
    j = 0;
    k = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[2][j] == av[1][i])
                {
                    k +=1;
                    j++;
                    break ;
                }
                j++;  
            }
            i++;//
        }
        if(k == ft_strlen(av[1]))
        {
            ft_putstr(av[1]);
        }
    }
    write (1, "\n", 1);
    return (0);
}