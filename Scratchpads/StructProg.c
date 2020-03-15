#include <stdio.h>
#include <stdlib.h>

void call(int n)
{
	int i = 1;
	int x;

	do {
		x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
		}
		else {
			do {
				if (x % 10 == 3) {
					printf(" %d", i);
					x = 0;
				}
				else x /= 10;
			} while (x);
		}
	} while (++i <= n);
	putchar('\n');
}


int main()
{
	int n;

	scanf("%d", &n);
	call(n);
	return 0;
}

