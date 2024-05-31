

#include "ft_printf.h"

int ft_putnbr(int num)
{
    int len = 0;

    if (num == -2147483648)
    {
        len += ft_putchar('-');
        len += ft_putchar('2');
        num = 147483648;
    }
    else if (num < 0)
    {
        len += ft_putchar('-');
        num = - num;
    }
    if (num >= 10)
    {
        len += ft_putnbr(num / 10);
        len += ft_putnbr(num % 10);
    }
    else
    {
        len += ft_putchar(num + '0');
    }
    return len;
}