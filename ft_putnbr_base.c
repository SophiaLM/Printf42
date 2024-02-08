#include "libftprintf.h"

void	ft_putnbr_base(unsigned int n, char *base, unsigned int size, int *count)
{
	if (n >= size)
	{
		ft_putnbr_base(n / size, base, size, count);
		ft_putchar(base[n % size], count);
	}
	else
		ft_putchar(base[n], count);
}
