#include "libftprintf.h"

char	ft_putchar(char c)
{
	if (c)
		write(1, &c, 1);
}
