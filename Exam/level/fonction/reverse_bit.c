#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result;

	result = octet;
	while (octet)
	{
		result <<= 1;
		result |= octet & 1;
		octet >>= 1;
	}
	result <<= 1;
	return (result);
}

int		main()
{
	printf("%d", reverse_bits('f'));
	return(0);
}
