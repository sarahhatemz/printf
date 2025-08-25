/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salzghou <salzghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:50:58 by salzghou          #+#    #+#             */
/*   Updated: 2025/08/25 18:47:02 by salzghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
int ft_putchar(char c);
int ft_putnbr(int nb);
int ft_putstr(char *s);
int ft_unbr(unsigned int n);
int ft_puthex(unsigned int n, int is_upper );
int ft_putptr(void *pointer);
int ft_printf(const char *f, ...);

#endif
