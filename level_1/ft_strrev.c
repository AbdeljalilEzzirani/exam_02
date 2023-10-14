/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 02:29:19 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/14 03:09:19 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int				i;
	int				length;
	char			tmp;

	i = 0;
	length = 0;
	while (str[length])
		length++;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
		i++;
	}
	return (str);
}

int main ()
{
	char str[]="massi byard";
	printf ("ft -----> %s", ft_strrev(str));
}