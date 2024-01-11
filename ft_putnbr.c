#include "libftprintf.c"

void    ft_putnbr(int n, int fd)
{
	int long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putstr('-', 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, 1);
		ft_putchar(nb % 10 + '0', 1);
	}
	if (nb < 10)
		ft_putchar(nb % 10 + '0', 1);
}
