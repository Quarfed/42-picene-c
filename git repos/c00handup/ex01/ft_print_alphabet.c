#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	al;

	al = 'a';
	while (al != '{')
	{
		write(1, &al, 1);
		al++;
	}
}
