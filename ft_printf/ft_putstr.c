#include "ft_printf.h"

int ft_putstr(const char *str)
{
    int i = 0;

    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}
