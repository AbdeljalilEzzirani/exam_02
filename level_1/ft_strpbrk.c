/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <abez-zir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:01:09 by abez-zir          #+#    #+#             */
/*   Updated: 2023/10/14 14:29:11 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int			i;   
	int			j;
	
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return ((char *)s1+i);
			j++;
		}
		i++;
	}
	return(NULL);
}
int main()
{
	char *s1 = "abdeljalil";
	char *s2 = "j";
	char *s3;
	s3  = ft_strpbrk(s1, s2);
	printf("%s\n", s3);
	s3  = strpbrk(s1, s2);
	printf("%s\n", s3);
}
