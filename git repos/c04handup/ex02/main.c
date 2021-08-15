#include<unistd.h>
void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(196427);
	write(1, "\n", 1);
	ft_putnbr(-6238043);
	write(1, "\n", 1);
	return (1);
}
