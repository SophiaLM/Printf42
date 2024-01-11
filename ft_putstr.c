#include "libftprintf.h"

char	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		write(1, &c[i++], sizeof(c));
}
