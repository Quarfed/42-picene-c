char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int 	main(void)
{
	char	src[] = "Hello ";
	char	dest[] = "World \n";
	printf("src: %s\n", src);
	printf("dest: %s",dest);
	printf("%s", ft_strcat(src, dest));
}*/
