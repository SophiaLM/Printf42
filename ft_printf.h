/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soluna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:27 by soluna            #+#    #+#             */
/*   Updated: 2024/02/09 19:33:45 by soluna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
void	ft_putchar(int str, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int c, int *count);
void	ft_putbase(unsigned int n, char *base, unsigned int size, int *count);
void	ft_putptr(void *ptr, int *count);

#endif
