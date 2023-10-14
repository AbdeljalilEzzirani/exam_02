/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:49:42 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/14 14:27:50 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int			i;
	int		j;
	char		*str;
	
	i = 0;
	j = 0;
	while (src[i])
		i++;
	str = malloc(sizeof(char *) * i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

int main(void)
{
	printf("%s\n", ft_strdup("This is a test!"));
}
