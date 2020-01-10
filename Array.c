#include <stdio.h>
int main(){
  int arr[5]={1, 2, 3, 4, 5};
  int n = sizeof(arr)/ sizeof(arr[0]);
  printf("Address of array is %p\n", (void*)arr );
  printf("Address of array is %p\n", (void*)&arr);
  printf("Address of array is %p\n", (void*)&arr+1);
  printf("Address of array is %p\n", (void*)&arr-1);
}
