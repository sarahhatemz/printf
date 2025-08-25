/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salzghou <salzghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:15:55 by salzghou          #+#    #+#             */
/*   Updated: 2025/08/25 19:03:37 by salzghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"
#include <stdarg.h>

int handle_format(char specifier, va_list args)
{
    int count = 0;

    if (specifier == 'c')
        count += ft_putchar(va_arg(args, int));
    else if (specifier == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (specifier == 'd' || specifier == 'i')
        count += ft_putnbr(va_arg(args, int));
    else if (specifier == 'u')
        count += ft_unbr(va_arg(args, unsigned int));
    else if (specifier == 'x')
        count += ft_puthex(va_arg(args, unsigned int), 0);
    else if (specifier == 'X')
        count += ft_puthex(va_arg(args, unsigned int), 1); 
    else if (specifier == 'p')
        count += ft_putptr(va_arg(args, void *));
    else if (specifier == '%')
        count += ft_putchar('%');
    return count;
}
int ft_printf(const char *format, ...)
{
    int i = 0;
    int count = 0;
    va_list args;

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            count += handle_format(format[i + 1], args);
            i += 2;
        }
        else
        {
            count += ft_putchar(format[i]);
            i++;
        }
    }

    va_end(args);
    return count;
}
#include <stdio.h>  // Only used for comparing with real printf (optional)
 // Your custom ft_printf header

int main(void)
{
    int printed;

    printed = ft_printf("Hello %s, number: %d, hex: %x, ptr: %p\n", "world", 42, 255, &printed);

    ft_printf("Total printed: %d\n", printed);

    // Optional comparison using real printf
    // printf("Reference (libc) printf: Hello %s, number: %d, hex: %x, ptr: %p\n", "world", 42, 255, &printed);
    // printf("Expected total printed: %d\n", printed);

    return 0;
}

