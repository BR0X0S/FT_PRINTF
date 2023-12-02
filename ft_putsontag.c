/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsontag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:53:15 by oumondad          #+#    #+#             */
/*   Updated: 2023/12/02 20:48:25 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>

int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}


int ft_putsontag(char *formontage, int x)
{
    int i;
    int y;

    y = 0;
    i = 0;
    if (x != 0)
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

int main ()
{
    int i = ft_putsontag("liuguykgjuyf%%%%%%%", 13);
    printf("\n");
    printf("%%%%%%%");
}