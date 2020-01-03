#include <stdio.h>
#include <stdlib.h>
int main(){
  int a,b;
  scanf("%d %d", &a, &b);
                                    // 2 shift left is exponential
  printf("%d %d", a*b, (a+b) << 1); // 1 shift left is just multiply each value by two
}