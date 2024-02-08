#include "libftprintf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
		*count += write(1, "-2147483648", 11);
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putchar(n % 10 + '0', count);
	}
	if (n < 10)
		ft_putchar(n % 10 + '0', count);
}
