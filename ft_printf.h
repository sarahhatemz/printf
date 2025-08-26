/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salzghou <salzghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:50:58 by salzghou          #+#    #+#             */
/*   Updated: 2025/08/26 18:32:15 by salzghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_unbr(unsigned int n);
int	ft_puthex(unsigned long n, int is_upper);
int	ft_putptr(void *pointer);
int	ft_printf(const char *f, ...);
int	ft_output(char specifier, va_list args);
#endif
