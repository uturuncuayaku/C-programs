int x = 10;
int *p = &x;
int **q = &p;

int foo(const int *ptr)
{
	/* *ptr cannot be changed */

}
int foo(int* const ptr)
{
	/* ptr cannot be changed */

}
int foo(const int* const ptr)
{
	/* neither ptr nor *ptr cannot be changed */

}
int foo(char* filename, int A[], int* countptr)
{
	FILE* fp = NULL;
	int num = 0;
	if ((fp = fopen(filename,"r")) != NULL){
		while (fscanf(fp, "%d", &num) > 0)
		{
			A[*countptr] = num;
			*countptr += 1;
		}
		return 0;
	}
	else
		return 1;
}
