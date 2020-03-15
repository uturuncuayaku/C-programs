#include <stdio.h>

int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	
	int i, j;

	for( i = 0; i < sizeof(buffer); i += 10)
	{
		printf("%08x: ", i);
		
		j = 0;
		
		while (j < 10) 
		{
			if (j % 2 == 0 && j != 0) printf(" ");
			if ((j + i) > sizeof(buffer) - 1) printf("  ");
			else printf("%.2x", buffer[i + j]);
			j++;
		}
		printf(" ");
		j = 0;
		while (j < 10)
		{
			if ((j + i) > sizeof(buffer) - 1) break;
			if (buffer[j + i] <= 31 || buffer[j +1] >= '~')
				buffer[j + i] = '.';

			putchar(buffer[j + i]);
			j++;
		}
		printf("\n");
	}

	return (0);
}
