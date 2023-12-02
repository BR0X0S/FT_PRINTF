/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:48:24 by oumondad          #+#    #+#             */
/*   Updated: 2023/12/01 18:49:32 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(unsigned long nb)
{
	int	i;

	ft_putstr("0x");
	i = ft_puthex(nb, "0123456789abcdef");
	return (i + 2);
}
// int main ()
// {
// 	int x = 8;
// 	//int y = &x;
// 	int y = printf("%s", NULL);
// 	int i = ft_print_address((long)&x);
// 	printf("\n%d\n %d", i,y);
	
// }
