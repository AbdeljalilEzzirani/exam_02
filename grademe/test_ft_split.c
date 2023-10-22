#include <stdlib.h>

char *ft_strncpy(char *dest, char *str, int nbr)
{
	int		i = 0;

	while (i <= nbr && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    **ft_split(char *str)
{
	int		i = 0;
	int		k = 0;
	int		l = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ' && str[i] == '\t' && str[i] == '\n')
			i++;
		k++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	char **dest = (char **)malloc(sizeof(char *) * (k + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ' && str[i] == '\t' && str[i] == '\n')
			i++;
		k = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (i > k)
		{
			dest[l] = (char *)malloc(sizeof(char) * ((i - k) + 1));
			ft_strncpy(dest[k++], &str[i], i - k);
		}
	}
	dest[k] = NULL;
	return (dest);
}

#include <stdio.h>

char	**ft_split(char *str);

int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", split[0]);
		i = 1;
		while (split[i] != 0)
		{
			printf("%s ", split[i]);
			i++;
		}
		printf("%s", split[i]);
	}
	printf("\n");
    return (0);
}
