#include <stdio.h>

int main(){

  int W,H;
  int x,y,r;

  scanf("%d%d%d%d%d", &W,&H,&x,&y,&r);

  if
    (r <= x 
  && r <= y 
  && x <= (W - r)
  && y <= (H - r) ) printf("Yes\n");
  
  else printf("No\n");

  return 0;

}