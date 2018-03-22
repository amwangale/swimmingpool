#include <stdio.h>

unsigned char swapbit(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}

int		main(){
	printf("%d", swapbit(8));
return(0);
}
