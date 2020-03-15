#include <stdio.h>
int main(){
  int i,n;
  for(i=1;;i++){
    scanf("%d", &n);
    if(n==0)break;
    printf("Case %d: %d\n", i,n);
  }
  return 0;
}