#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	
	char *ptr;
	char *str = malloc(sizeof(char) * strlen(argv[1]) +1);
	ptr = &str;

	unsigned int l = strlen(ptr);
	
	int i;
	int wwc = 0, pos = 0, max = 0;

	for (i = 0; i < l; i++)
	{
		if (wcc == max)
			pos = i - max;
		if (ptr[i] == ',')
			wcc = 0;
		else
		{
			wcc++;

			if (wcc > max)
			{
				max = wcc;
			}
			
		}
	}
	for(i = 1; i <= max; i++, pos++)
		printf("%c",str[pos]);


	return (0);


}
