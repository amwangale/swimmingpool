#include <stdio.h>
#include <stdlib.h>

float distance_strings(char *string1, char *string2)
{   
	int len1 = 0; int len2 = 0; int distance; int c1 = 0; int c2 = 0;
	while(string1)
		len1++;
	while(string2)
		len2++;
	while (string1[c1] ||string2[c2])
	{   
		if (string1[c1] == ' ' && string2[c2] == ' ')
			distance++;c2++;c1++; 
		else if (((string1[c1] >= 65 && string1[c1] <=90) || (string1[c1] >= 97 && string1[c1] <=122)) && ((string2[c2] >= 65 && string2[c2] <=90) || (string2[c2] >= 97 && string2[c2] <=122)))
		{   
				if(string1[c1] == string2[c2])
					distance++;c1++;c2++;
				else
					c1++;c2++;
		}
		else
			c1++;c2++;
	}
	return(distance);
}

int     main(int ac, char **av)
{
	if (ac == 3)
	{
		distance_strings(av[1], av[2]);
	}
	return(0);
}

