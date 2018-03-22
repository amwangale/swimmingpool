#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		srcsize;
	int		i;

	srcsize = 0;
	i = 0;
	while (src[srcsize])
		srcsize++;
	ptr = (char*)malloc(sizeof(*ptr) * (srcsize + 1));
	while (i < srcsize)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[srcsize] = '\0';
	return (ptr);
}
