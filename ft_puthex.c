/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:28:17 by oumondad          #+#    #+#             */
/*   Updated: 2023/12/03 19:01:22 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexlen(unsigned int nb)
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

int	ft_puthex(unsigned int nb, char *base)
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
		ft_puthex(nb / 16, base);
		ft_puthex(nb % 16, base);
	}
	return (hexlen(nb));
}
