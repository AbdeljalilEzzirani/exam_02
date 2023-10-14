/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:32:34 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/14 17:50:17 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int					max_numbre;
	unsigned int		i;
	
	i = 0;
	max_numbre = tab[i];
	if (!tab)
		return (0);
	while (i < len)
	{
		if (max_numbre < tab[i])
			max_numbre = tab[i];
		i++;
	}
	return (max_numbre);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc < 3)
//         return(0);
//     int *tab = malloc(sizeof(int) * (argc - 1));
    
//     printf("max( {");
//     for (unsigned int i = 2; i < (unsigned int)argc; i++)
//     {
//         printf("%s", argv[i]);
//         if (i != (unsigned int)argc - 1)
//             printf(";");
//         tab[i - 2] = atoi(argv[i]);
//     }
//     printf("} , %s) = %d\n", argv[1], max(tab, atoi(argv[1])));
//     // printf("max(\"%s\") = %d\n", argv[1], is_power_of_2(atoi(argv[1])));
//     return(0);
// }