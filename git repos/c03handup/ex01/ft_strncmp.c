int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "hall";
	char	str2[] = "hello";


	printf("string 2: %s\n", str1);
	printf("string 1: %s\n", str2);
	printf("%d\n", ft_strncmp(str1, str2, 3));
	printf("%d\n", ft_strncmp(str1, str2, 3));

	return (0);
}*/
