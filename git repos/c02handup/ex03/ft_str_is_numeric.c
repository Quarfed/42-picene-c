#include <stdio.h>

int	char_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!char_is_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	a = ft_str_is_numeric("Hello");
	int	b = ft_str_is_numeric("Hello!");
	int	c = ft_str_is_numeric("Hello0");
	int	d = ft_str_is_numeric("01234");
	int	e = ft_str_is_numeric("");
	printf("Hello: %d\n", a);
	printf("Hello1: %d\n", b);
	printf("Hello0: %d\n", c);
	printf("01234: %d\n", d);
	printf(":%d\n", e);
}*/
