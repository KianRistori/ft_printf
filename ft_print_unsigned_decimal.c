/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:36:00 by kristori          #+#    #+#             */
/*   Updated: 2022/10/24 14:46:01 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_absolute_value(unsigned int nbr)
{
	return (nbr);
}

static int	ft_intlen(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_itoa(unsigned int nbr)
{
	char	*ris;
	int		len;

	len = ft_intlen(nbr);
	ris = (char *)malloc(sizeof(char) * (len + 1));
	ris[len] = '\0';
	if (nbr == 0)
		ris[0] = '0';
	while (nbr != 0)
	{
		len--;
		ris[len] = ft_absolute_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (ris);
}

int	ft_print_unsigned_decimal(unsigned int nb)
{
	char	*ris;
	int		print_len;

	print_len = 0;
	if (nb == 0)
		print_len += ft_putchar('0');
	else
	{
		ris = ft_itoa(nb);
		print_len += ft_printstr(ris);
		free(ris);
	}
	return (print_len);
}
