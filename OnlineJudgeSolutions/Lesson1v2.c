#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
  char s[100];
#if 1
  gets(s);
#else
  gets_s(s,50);
#endif 
  x = atoi(s);
  printf("%d\n", x*x*x);
  return 0;
}