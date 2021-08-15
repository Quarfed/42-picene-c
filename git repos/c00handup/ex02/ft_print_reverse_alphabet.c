#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ral;

	ral = 'z';
	while (ral != '`')
	{
		write(1, &ral, 1);
		ral--;
	}
}
/*
int main()
{
	ft_print_reverse_alphabet();
	return 0;
} */
