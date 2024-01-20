#include "libftprintf.h"
#include "stdio.h"

int	main()
{
	char	*ptr = "H";

	printf("Esto es un porcentaje c: %s\n", ptr);
	ft_printf("Esto es un porcentaje c: %c\n", ptr);
}
