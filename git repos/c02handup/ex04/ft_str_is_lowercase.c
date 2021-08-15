int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	char str1[10] = {0};
	char str2[20] = {"balls"};
	char str3[20] = {"WANG"};
	char str4[10] = {"balls"};

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
}*/
