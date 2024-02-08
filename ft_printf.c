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

void	print(char const *str, va_list argv, int i, int *count)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(argv, int), count);
	if (str[i] == 's')
		ft_putstr(va_arg(argv, char *), count);
	if (str[i] == 'p')
		ft_putptr(va_arg(argv, unsigned long), count);
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(argv, int), count);
	if (str[i] == 'u')
		ft_putnbr_base(va_arg(argv, unsigned int), "0123456789", 10, count);
	if (str[i] == 'X')
		ft_putnbr_base(va_arg(argv, unsigned int), "0123456789ABCDEF", 16, count);
	if (str[i] == 'x')
		ft_putnbr_base(va_arg(argv, unsigned int), "0123456789abcdef", 16, count);
	if (str[i] == '%')
	       ft_putchar('%', count);	
	else
		NULL;
}

int	ft_printf(char const *str, ...)
{
	va_list argv;
	int	count;
	int	i;

	count = 0;
	i = 0;
	va_start(argv, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			print(str, argv, i, &count);
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(argv);
	return (count);
}
