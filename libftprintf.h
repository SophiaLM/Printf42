/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:27 by soluna            #+#    #+#             */
/*   Updated: 2024/02/02 22:51:25 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const*, ...);
void	ft_putchar(int str, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int c, int *count);
void	ft_putnbr_base(unsigned int n, char *base, unsigned int base_size, int *count);
void	ft_putptr(unsigned long *n, int *count);

#endif
