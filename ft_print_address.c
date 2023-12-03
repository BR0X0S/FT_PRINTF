/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:48:24 by oumondad          #+#    #+#             */
/*   Updated: 2023/12/03 19:07:19 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexlen(unsigned long nb)
{
	int	i;

	i = 0;
	while (nb)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

static int	puthex(unsigned long nb, char *base)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nb > 0 && nb < 16)
		ft_putchar(base[nb]);
	else
	{
		puthex(nb / 16, base);
		puthex(nb % 16, base);
	}
	return (hexlen(nb));
}

int	ft_print_address(unsigned long nb)
{
	int	i;

	ft_putstr("0x");
	i = puthex(nb, "0123456789abcdef");
	return (i + 2);
}
