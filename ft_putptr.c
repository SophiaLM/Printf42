/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:35:30 by soluna            #+#    #+#             */
/*   Updated: 2024/02/09 19:35:32 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbaseptr(void *n, char *base, unsigned int size, int *count)
{
	if ((size_t)n >= size)
	{
		ft_putbaseptr((void *)((size_t)n / size), base, size, count);
		ft_putchar(base[(size_t)n % (size_t)size], count);
	}
	else
		ft_putchar(base[(size_t)n], count);
}

void	ft_putptr(void *ptr, int *count)
{
	*count += write(1, "0x", 2);
	ft_putbaseptr(ptr, "0123456789abcdef", 16, count);
}
