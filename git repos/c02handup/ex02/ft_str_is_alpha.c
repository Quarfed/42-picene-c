int	char_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	char_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!char_is_lower(str[i]) && !char_is_upper(str[i]))
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int	main(void)
{
	int a = ft_str_is_alpha("Hello");
	int b = ft_str_is_alpha("Hello!");
	int c = ft_str_is_alpha("Hello0");
	printf("Hello: %d\n", a);
	printf("Hello1: %d\n", b);
	printf("Hello0: %d\n", c);
} */
