#include "libftprintf.h"

void	print(char const *ph, size_t len)
{
	va_list	argv;
	va_start(argv, ph);

	while (ph)
	{
		if (ph == %)
		{
			if ((ph + 1) == c)
				ft_putchar(va_arg(argv, char *));
			if ((ph + 1) == s)
				ft_putstr(va_arg(argv, char *));
			if ((ph + 1) == p)
				ft_putstr(va_arg(argv, &ph));
			if ((ph + 1) == d)
				ft_putnbr(va_arg(argv, int));
			if ((ph + 1) == i)
				ft_putnbr(va_arg(argv, int));
		}
		ph++;
	}
}

int	ft_printf(char const *, ...)
{
}
