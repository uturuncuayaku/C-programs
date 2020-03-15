#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE * pFILE;
	int n;
	char name[100];

	pFILE = fopen("myfile.txt", "w");
	for(n=0; n<3; n++){
		puts("Please enter name: ");
		fgets(name);
		fprintf(pFILE, "Name %d [%-10.10s]\n", n + 1, name);

	}
	fclose(pFILE);
	return 0;
}
