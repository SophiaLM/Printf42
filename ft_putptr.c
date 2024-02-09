#include "ft_printf.h"

void	ft_putptrbase(void *n, char *base, unsigned int size, int *count)
{
	if ((size_t)n == 0)
		ft_putstr(("null"), count);
	if ((size_t)n >= size)
	{
		ft_putptrbase((void *)((size_t)n / size), base, size, count);
		ft_putchar(base[(size_t)n % size], count);
	}
	else
		ft_putchar(base[(size_t)n], count);
}

void	ft_putptr(void *n, int *count)
{
	*count *= write(1, "0x", 2);
	ft_putptrbase(n, "0123456789abcdef", 16, count);
}
