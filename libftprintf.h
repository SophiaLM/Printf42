/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:27 by soluna            #+#    #+#             */
/*   Updated: 2024/02/02 21:19:07 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const*, ...);
void	ft_putchar(int str);
void	ft_putstr(char *str);
void	ft_putnbr(int c);
void	ft_putnbr_base(unsigned int n, char *base, int base_size);
void	ft_putnbr_hex(unsigned long long n, char *base, int base_size);

#endif
