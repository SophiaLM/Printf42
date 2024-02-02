#include "libftprintf.h"

void	ft_putnbr_base(unsigned int n, char *base, int base_size)
{
	char	result[20];
	int	i;
	int	j;

	i = 0;
	while (n >= base_size)
	{
		j = n % base_size;
		result[i++] = base[j];
		n = n / base_size;
	}
	result[i] = base[n];
	while (i >= 0)
		ft_putchar(result[i--]);
}
