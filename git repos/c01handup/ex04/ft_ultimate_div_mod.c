#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}
/*
#include <stdio.h>

int main()
{
	int	a;
	int b;

	a = 11;
	b = 5;
	printf("before a: %d\n", a);
	printf("before b: %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("after a: %d\n", a);
	printf("after b: %d\n", b);
}*/
