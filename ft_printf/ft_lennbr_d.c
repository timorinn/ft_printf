
#include <stdio.h>

#include "ft_printf.h"

int		ft_lennbr_d(long long d, long long c)
{
	int len;

	len = 1;
	while (d /= c)
		len++;
	return (len);
}
