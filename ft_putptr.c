#include "libftprintf.h"

void	ft_putptr(void *ptr)
{
	write(1, "0X", 2);
	ft_putnbr_base((unsigned long)ptr, "0123456789abcdef", 16);
}
