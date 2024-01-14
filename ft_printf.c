/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:46:16 by soluna            #+#    #+#             */
/*   Updated: 2024/01/14 13:57:49 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print(char const *str, ...)
{
	va_list	argv;
	va_start(argv, str);

	while (str != '\0')
	{
		if (str == (char *)'%')
		{
			if ((str + 1) == (char *)'c')
				ft_putstr(va_arg(argv, char *));
			if ((str + 1) == (char *)'s')
				ft_putstr(va_arg(argv, char *));
/*			if ((str + 1) == p)
				ft_putstr(va_arg(argv, ph));
			if ((str + 1) == d)
				ft_putnbr(va_arg(argv, int));
			if ((str + 1) == i)
				ft_putnbr(va_arg(argv, int));*/
		}
		else
			NULL;
		str++;
	}
	va_end(argv);
}

int	ft_printf(char const *ph, ...)
{
	while (ph != '\0')
	{
		print(ph);
		write(1, &ph, sizeof(ph));
	}
}
