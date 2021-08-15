#include <stdio.h>

int	char_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!char_is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int a = ft_str_is_printable("Hello");
	char chars[6] = {1, 40, 41, 42, 43, 0};
	int b = ft_str_is_printable(chars);

	printf("Should be 1: %d\n", a);
	printf("Should be 0: %d\n", b);
}*/
