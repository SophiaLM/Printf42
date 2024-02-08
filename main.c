#include "libftprintf.h"
#include "stdio.h"

int	main()
{
	void *n = "HOLA";

	ft_printf("Mine: %p\n", n);
	printf("Orig: %p\n", n);
	return 0;
}
