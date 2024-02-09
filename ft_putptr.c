#include "ft_printf.h"

void	ft_putptr(void *n, char *base, unsigned int size, int *count)
{
//	if ((size_t)n == 0)
//		ft_putstr(("null"), count);
	if ((size_t)n >= size)
	{
		ft_putptr((void *)((size_t)n / size), base, size, count);
		ft_putchar(base[(size_t)n % (size_t)size], count);
	}
	else
		ft_putchar(base[(size_t)n], count);
}
