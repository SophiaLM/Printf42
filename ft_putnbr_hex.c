#include "libftprintf.h"

void	ft_putnbr_hex(unsigned int n, char *base, int base_size)
{
	char	*a;

	if (n >= base_size)
	{
		ft_putnbr_hex(n / base_size, base, base_size);
		ft_putchar(a[n % base_size]);
	}
	if (n <= base_size)
		ft_putchar(a[n % base_size]);
}
