/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:06:12 by kristori          #+#    #+#             */
/*   Updated: 2022/10/21 14:53:17 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int     ft_printf(const char * format, ...);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void	ft_putnbr(int nb);
void    ft_print_unsigned_decimal(unsigned int nb);
void	ft_putnbr_hex(int nb);

#endif