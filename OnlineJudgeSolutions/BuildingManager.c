// ITP1_6_C:   Official House
// 2017.7.27

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int b, f, r, v;
	int house[5][4][11];
	int i, n;

	for (b = 1; b <= 4; b++) {
		for (f = 1; f <= 3; f++) {
			for (r = 1; r <= 10; r++) house[b][f][r] = 0;
		}
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d%d", &b, &f, &r, &v);
		house[b][f][r] += v;
	}

	for (b = 1; b <= 4; b++) {
		for (f = 1; f <= 3; f++) {
			for (r = 1; r <= 10; r++) printf(" %d", house[b][f][r]);
			putchar('\n');
		}
		if (b < 4) puts("####################");
	}
	return 0;
}
