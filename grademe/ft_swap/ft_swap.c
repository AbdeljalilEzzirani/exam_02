void	ft_swap(int *a, int *b)
{
	int				temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int main ()
// {
// 	int				i = 9;
// 	int				j = 5;
// 	printf ("beforee -->%d\n", i);
// 	printf ("beforee -->%d\n", j);
// 	ft_swap(&i, &j);
// 	printf ("after   -->%d\n", i);
// 	printf ("after   -->%d\n", j);
// }