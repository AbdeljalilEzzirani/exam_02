int	ft_atoi(const char *str)
{
	int			i;
	int			fact;
	int			rest;

	i = 0;
	fact = 1;
	rest = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		fact = fact * -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		rest = (rest * 10) + (str[i] - 48);
		i++;
	}
	return (rest * fact);
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char str[]="13268!";
	printf ("%d\n", ft_atoi(str));
	printf ("%d\n", atoi(str));
}
