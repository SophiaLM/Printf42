/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:09:12 by soluna            #+#    #+#             */
/*   Updated: 2024/02/09 19:34:27 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbase(unsigned int n, char *base, unsigned int size, int *count)
{
	if (n >= size)
	{
		ft_putbase(n / size, base, size, count);
		ft_putchar(base[n % size], count);
	}
	else
		ft_putchar(base[n], count);
}
