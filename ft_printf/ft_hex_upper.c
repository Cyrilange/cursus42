

#include "ft_printf.h"

int ft_hex_upper(unsigned long n)
{
	int		num;
	char	*hex;

	num = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		num += ft_hex_upper(n / 16);
	write(1, &hex[n % 16], 1);
	num++;
	return (num);
}
