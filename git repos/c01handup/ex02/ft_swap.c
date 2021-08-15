#include <unistd.h>
/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int main()
{
	int	a;

	int b;

	a = 6;
	b = 4;
	printf("before the swap a: %d\n", a);
	printf("before the swap b: %d\n", b);
	ft_swap(&a, &b);
	printf("after the swap a: %d\n", a);
	printf("after the swap b: %d\n", b);
} */
