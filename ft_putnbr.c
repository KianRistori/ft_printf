/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:51:05 by kristori          #+#    #+#             */
/*   Updated: 2022/10/24 12:37:47 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	len;
	char	*ris;

	len = 0;
	ris = ft_itoa(nb);
	len = ft_printstr(ris);
	free(ris);
	return (len);
}
