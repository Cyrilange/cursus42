// ft_printf.c

#include "ft_printf.h"

static int ft_format(va_list *args, const char format)
{
    int frt;

    frt = 0;
    if (format == 'c')
        frt = frt + ft_putchar(va_arg(*args, int));
    if (format == 's')
        frt = frt + ft_putstr(va_arg(*args, char *));
    if (format == 'u')
        frt = frt + ft_unsigned_nbr(va_arg(*args, unsigned int));
    if (format == 'x')
        frt = frt + ft_hex_lowercase(va_arg(*args, unsigned int));
    if (format == 'X')
        frt = frt + ft_hex_upper(va_arg(*args, unsigned int));
    if (format == 'i' || format == 'd')
        frt = frt + ft_putnbr(va_arg(*args, int));
    if (format == 'p')
        frt = frt + ft_print_pointer(va_arg(*args, void *));
    if (format == '%')
        frt = frt + ft_putchar('%');
    return (frt);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int total_len = 0;
    int i = 0;

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            total_len += ft_format(&args, format[i]);
        }
        else
        {
            ft_putchar(format[i]);
            total_len++;
        }
        i++;
    }

    va_end(args);
    return total_len;
}


#include <stdio.h>


int main() {
    int x = 42;
    void *ptr = &x;

    // Comparaison des résultats de ft_printf et printf
    printf("Comparaison des résultats de ft_printf et printf:\n\n");

    printf("ft_printf Integer: %d\n", ft_printf("Integer: %d\n", -12345));
    printf("printf Integer: %d\n\n", printf("Integer: %d\n", -12345));

    printf("ft_printf Unsigned: %d\n", ft_printf("Unsigned: %u\n", 12345U));
    printf("printf Unsigned: %d\n\n", printf("Unsigned: %u\n", 12345U));

    printf("ft_printf Hexadecimal (lower): %d\n", ft_printf("Hexadecimal (lower): %x\n", 0xABCD));
    printf("printf Hexadecimal (lower): %d\n\n", printf("Hexadecimal (lower): %x\n", 0xABCD));

    printf("ft_printf Hexadecimal (upper): %d\n", ft_printf("Hexadecimal (upper): %X\n", 0xABCD));
    printf("printf Hexadecimal (upper): %d\n\n", printf("Hexadecimal (upper): %X\n", 0xABCD));

    printf("ft_printf Character: %d\n", ft_printf("Character: %c\n", 'A'));
    printf("printf Character: %d\n\n", printf("Character: %c\n", 'A'));

    printf("ft_printf String: %d\n", ft_printf("String: %s\n", "Hello, world!"));
    printf("printf String: %d\n\n", printf("String: %s\n", "Hello, world!"));

    printf("ft_printf Pointer: %d\n", ft_printf("Pointer: %p\n", ptr));
    printf("printf Pointer: %d\n\n", printf("Pointer: %p\n", ptr));

    printf("ft_printf Percent: %d\n", ft_printf("Percent: %%\n"));
    printf("printf Percent: %d\n\n", printf("Percent: %%\n"));

    return 0;
}
