

#ifndef FT_PRINTF_H
#define FT_PRINTF_H


#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
size_t ft_strlen(const char *str);
int ft_putchar(int c);
int ft_putnbr(int num);
int ft_putstr(const char *str);
int ft_unsigned_nbr(unsigned long n);
int ft_print_pointer(void *ptr);
int ft_hex_upper(unsigned long n);
int ft_hex_lowercase(unsigned long n);

#endif
