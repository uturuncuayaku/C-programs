#include <stdio.h>
int main(){
  int x,y;
  int temp;

  for(;;){
    scanf("%d %d",&x,&y);
    if(x ==0 && y == 0) break;
    if(x>y) printf("%d %d",x, y);
    else printf("%d %d",x ,y);


  }

}