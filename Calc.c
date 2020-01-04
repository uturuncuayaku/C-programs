#include <stdlib.h>
#include <stdio.h>

int main(){
  int a = 0;
  int b = 0;
  char op;
  int ans = 0;

while(1){
  scanf("%d %c %d", &a,&op,&b);
  if(op== '/') ans = a/b;
  else if(op== '*') ans = a*b;
  else if(op== '+') ans = a+b;
  else if(op== '-') ans = a-b;
  else if(op =='?')break;
  printf("%d\n", ans);
}//while
return 0;
}