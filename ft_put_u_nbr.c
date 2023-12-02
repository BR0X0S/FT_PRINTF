/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:14:29 by oumondad          #+#    #+#             */
/*   Updated: 2023/12/01 12:27:14 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbrlen(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_put_u_nbr(unsigned int nb)
{
	if (nb >= 0 && 9 >= nb)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_put_u_nbr(nb / 10);
		ft_put_u_nbr(nb % 10);
	}
	return (nbrlen(nb));
}
