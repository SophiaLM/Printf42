#include "libftprintf.h"

void	ft_putbaseptr(void *n, char *base, unsigned int size, int *count)
{
	if ((long int)n >= size)
	{
		ft_putbaseptr((void *)((long int)n / size), base, size, count);
		ft_putchar(base[(long int)n % (long int)size], count);
	}
	else
		ft_putchar(base[(long int)n], count);
}
