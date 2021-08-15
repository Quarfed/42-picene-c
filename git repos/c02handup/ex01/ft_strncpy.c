#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "0123456789abcdefghij";
	char	b[10];

	printf("Before a: %s\n", a);
	printf("Before b: %s\n", b);
	ft_strncpy(b, a, 5);
	printf("After a: %s\n", a);
	printf("After b: %s\n", b);
}*/
