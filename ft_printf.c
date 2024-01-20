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
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str == (char *)'%')
		{
			if (str == (char *)'c')
				ft_putchar(va_arg(argv, char *));
			if ((str + 1) == (char *)'s')//str + 1 no le esta sumando una pocision, esta empezando desde +1
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


int	ft_printf(char const *str, ...)
{
	va_list argv;
	va_start(argv, str);
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	va_end(argv);
	return (i);
}
