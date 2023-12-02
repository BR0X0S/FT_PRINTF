#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_putchar(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int i = 0;

    if (!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int chik_chak(char *format, va_list arg, int i)
{
    int x = 0;

    if (format[i] == 'c')
        x += ft_putchar(va_arg(arg, int));
    else if (format[i] == 's')
        x += ft_putstr(va_arg(arg, char *));
    return (x);
}

int print(char *format, ...)
{
    int x = 0;
    int y = 0;

    va_list arg;
    va_start(arg, format);
    while (format[x])
    {
        if (format[x] == '%')
        {
            x++;
            y += chik_chak(format, arg, x);
        }
        else
        {
            ft_putchar(format[x]);
            y++;
        }
        x++;
    }
    va_end(arg);
    return (y);
}

int main()
{
    int i = print("str1 :%s", "oussama");
    printf("\n%d", i);
    return 0;
}
