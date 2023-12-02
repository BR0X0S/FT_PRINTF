/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:24:01 by oumondad          #+#    #+#             */
/*   Updated: 2023/12/02 20:46:15 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putsontag(const char *formontage, int x)
{
    int i;
    int y;

    y = 0;
    i = 0;
    x--;
    while (formontage[x] && formontage[x] == '%')
    {
        x++;
        i++;
    }
    i /= 2;
    i++;
    while (i)
    {
        ft_putchar('%');
        i--;
        y++;
    }
    return (y);
}


static int check_arg(const char *format, va_list arg, int i)
{
	int x;

	if (format[i] == 'c')
		x = ft_putchar(va_arg(arg, int));
	else if (format[i] == 's' )
		x = ft_putstr(va_arg(arg, char *));
	else if (format[i] == 'u' )
		x = ft_put_u_nbr(va_arg(arg, unsigned int));
	else if (format[i] == 'X' )
		x = ft_puthex(va_arg(arg, unsigned long), "0123456789ABCDEF");
	else if (format[i] == 'x' )
		x = ft_puthex(va_arg(arg, unsigned long), "0123456789abcdef");
	else if (format[i] == 'p' )
		x = ft_print_address(va_arg(arg, unsigned long));
	else if (format[i] == 'd' || format[i] == 'i')
		x = ft_putnbr(va_arg(arg, long int));
	else if (format[i] == '%')
		x = ft_putchar('%');
	return (x);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	x;
	va_list	arg;
	va_start (arg, format);

	i = 0;
	x = 0;
	while (format[i])
	{
		if(format[i] == '%')
		{
			i++;
			x += check_arg(format, arg, i);
		}
		else
		{
			ft_putchar(format[i]);
			x++;
		}
		i++;
	}
	va_end(arg);
	return (x);
}

int main()
{
   // int i = ft_printf("str1 :%%s\n", "oussama");
	//int ii = printf("str2 :%%s\n", "oussama");
	
	int y = ft_printf("L3ADIYACH%%");
	printf("\n");
	int yy = printf("L3ADIYA%%");
	
    // printf("\n%d", i);
	// printf("\n%d", ii);
	// printf("\n%d", y);
	// printf("\n%d", yy);
    // return 0;
}
