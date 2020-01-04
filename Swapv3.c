#include <math.h>
#include <stdio.h>

int main(){
  
  int x,y;

  while(scanf("%d%d",&x,&y) && x != 0 || y != 0){
    if( x > y ) printf("%d %d\n", y,x); 
    else if( x < y ) printf("%d %d\n", x,y);
    else if( x == y )printf("%d %d\n", x,y);
  }
  return 0;
}