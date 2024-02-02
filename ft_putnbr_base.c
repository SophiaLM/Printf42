#include "libftprintf.h"

void	ft_putnbr_hex(unsigned long long n, char *base, int base_size)
{
	if (n >= base_size)
	{
		ft_putnbr_hex(n / base_size, base, base_size);
		ft_putchar(base[n % base_size]);
	}
	else
		ft_putchar(base[n]);
}
