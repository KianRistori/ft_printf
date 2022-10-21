/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:17:33 by kristori          #+#    #+#             */
/*   Updated: 2022/10/21 14:51:55 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 16);
		ft_putchar('8');
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 16);
		if (nb < 9)
			ft_putchar(48 + nb % 10);
		if (nb >= 10)
			ft_putchar((nb - 10) + 97);
	}
}