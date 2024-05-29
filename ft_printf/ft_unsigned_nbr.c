#include "ft_printf.h"

int ft_unsigned_nbr(unsigned long n)
{
	int len;
	const char *base;
	size_t base_len;

	len = 0;
	base = "0123456789";
	base_len = ft_strlen(base);

	if (n >= base_len)
		len += ft_unsigned_nbr(n / base_len);

	unsigned long remainder = n % base_len;
	char c = base[remainder];

	len = len + ft_putchar(c);

	return len;
}
/* recursive function ,
++The function returns the total number of characters printed after all recursive calls complete.
++The goal of the ft_unsigned_nbr function is to convert an unsigned long integer (n)
to its string representation in base 10 (decimal), print each character of this representation,
and rturn the total number of characters printed.
*/