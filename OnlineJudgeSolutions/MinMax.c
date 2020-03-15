#include <stdlib.h>
#include <stdio.h>

int main(){

  int n = 0;
  int d;
  int min = 1000000;
  int max =  -1000000;
  long long sum = 0;

  scanf("%d", &n);
  
  for(int i = 0; i < n ;i++){
    scanf("%d", &d);
    if(d < min) min = d;
    if(d > max) max = d;
    sum += d;

  }
  printf("%d %d %lld\n", min,max,sum);
  return 0;
}