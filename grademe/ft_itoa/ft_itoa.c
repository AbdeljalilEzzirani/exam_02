#include <stdlib.h>

int	get_len_nbr(int nbr)
{
	int		len = 0;

	if (nbr < 0)
	{
		len++;
		nbr = nbr * -1;
	}
	else if (nbr == 0)
		len++;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len = 0;
	char	*str;

	len  = get_len_nbr(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';

	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		--len;
		str[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (str);
}
