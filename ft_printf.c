/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:29:22 by kristori          #+#    #+#             */
/*   Updated: 2022/10/21 14:52:50 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char * format, ...)
{
    int     i;
    va_list     list;

    va_start(list, format);
    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[i+1] == 'c')
                ft_putchar(va_arg(list, int));
            else if (format[i+1] == 's')
                ft_putstr(va_arg(list, char *));
            // else if (format[i+1] == 'p')
            //     //The void * pointer argument has to be printed in hexadecimal format
            //     return ;
            else if (format[i+1] == 'd')
                ft_putnbr(va_arg(list, int));
            else if (format[i+1] == 'i')
                ft_putnbr(va_arg(list, int));
            else if (format[i+1] == 'u')
                ft_print_unsigned_decimal(va_arg(list, unsigned int));
            else if (format[i+1] == 'x')
                ft_putnbr_hex(va_arg(list, int));
            else if (format[i+1] == '%')
                ft_putchar('%');
        }
        i++;
    }
    return (0);
}