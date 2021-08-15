#include <unistd.h>
/* #include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 11;
	b = 5;
	mod = 0;
	div = 0;
	ft_div_mod(a, b, &div, &mod);
	
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);	
} */
