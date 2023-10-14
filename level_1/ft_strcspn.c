/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:34:01 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/13 23:47:35 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int         i;
    int         j;
    
    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (reject[j] == s[i])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

#include <unistd.h>
#include <stdio.h>
#include <string.h>
// include for size_t
// #include <stdlib.h>

int	main(void)
{
	printf("%lu\n", ft_strcspn("test", "es"));
	printf("%lu\n", strcspn("test", "es"));
printf("%lu\n", ft_strcspn("test", "f"));
	printf("%lu\n", strcspn("test", "f"));
}