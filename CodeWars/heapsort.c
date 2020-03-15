/**
 * main class
 */
# include < stdio.h >

void BuildHeap ( int * a, int n);
void swap ( int * a, int * b);
void HeapSort ( int * a, int n);
void HeapAdjust ( int * a, int i, int n);

int main (int argc, const char * argv[])
{
	int a[] = { 3, 25, 9, 30, 2 };
	HeapSort (a, 5);
	for( int i = 0; i < 5; i ++)
	{
		printf(" % d " , a [i]);
	}
	return (0);
}
void BuildHeap (int * a, int n)
{
	for ( int i = n - 1; i >= 0; i--)
	{
		HeapAdjust(a, i, n);
	}
}
void swap ( int * a, int * b)
{
	int temp;
	temp = * a;
	* a = * b;
	* b = temp;
}
void HeapSort ( int * a, int n)
{
	BuildHeap( a, n);
	for ( int i = n -1; i >= 0; i--)
	{
		//swap the top of the head and the last element, that is
		// the largest of the remaing elements is placed behind each time
		swap ( & a[0], & a [i + 1]);
		//readjust the heap to a large top heap
		HeapAdjust (a, 0, i);
	}
}
void HeapAdjust( int * a, int i, int n)
{
	int lchild = 2 * i; //left child node
	int rchild = 2 * i + 1;
	int max = i;
	
	if (i <= n)
	{
		if (lchild <= n && a [lchild] > a [max])
			max = lchild;
		if (rchild <= n && a [rchild] > a [max])
			max = rchild;
		if (i != max)
		{
			swap (&a[i], & a[max]);
			HeapAdjust(a, max, n);;;
		}
	}
}
