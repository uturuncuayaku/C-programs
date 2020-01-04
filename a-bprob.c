#include <stdio.h>
#include <stdlib.h>

int main(){
  int x = 0;
  int y = 0;
  scanf("%d%d",&x,&y);
  int d = x/y;
  int r = x%y;
  double ans =(double)x/y;

  printf("%d %d %lf\n",d,r,ans);
}