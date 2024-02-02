/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:46:16 by soluna            #+#    #+#             */
/*   Updated: 2024/02/02 22:43:56 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print(char *str, va_list argv, int i)
{
	i++;
	if (str[i] == 'c')
		ft_putchar(va_arg(argv, int));
	if (str[i] == 's')
		ft_putstr(va_arg(argv, char *));
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(argv, int));
	if (str[i] == 'u')
		ft_putnbr_base(va_arg(argv, unsigned int), "0123456789", 10);
	if (str[i] == 'X')
		ft_putnbr_base(va_arg(argv, unsigned int), "0123456789ABCDEF", 16);
	if (str[i] == 'x')
		ft_putnbr_base(va_arg(argv, unsigned int), "0123456789abcdef", 16);
	else
		NULL;
}

int	ft_printf(char const *str, ...)
{
	va_list argv;
	int	i;

	i = 0;
	va_start(argv, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			print((char *)str, argv, i);
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(argv);
	return (i);
}
