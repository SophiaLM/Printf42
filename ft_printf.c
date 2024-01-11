/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:46:16 by soluna            #+#    #+#             */
/*   Updated: 2024/01/11 20:21:39 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print(char const *str, size_t len)
{
	va_list	argv;
	va_start(argv, str);

	while (str)
	{
		if (str == %)
		{
			if ((str + 1) == c)
				ft_putchar(va_arg(argv, char *));
			if ((str + 1) == s)
				ft_putstr(va_arg(argv, char *));
			if ((str + 1) == p)
				ft_putstr(va_arg(argv, &ph));
			if ((str + 1) == d)
				ft_putnbr(va_arg(argv, int));
			if ((str + 1) == i)
				ft_putnbr(va_arg(argv, int));
		}
		str++;
	}
}

int	ft_printf(char const *, ...)
{
}
