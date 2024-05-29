

#include "ft_printf.h"

int ft_print_pointer(void *ptr)
{
    const char *prefix = "0x";
    int len = ft_putstr(prefix);
    unsigned long address = (unsigned long)ptr;
    len += ft_hex_lowercase(address);
    return len;
}
