#include <stdio.h>
int main(){
  int x,y,z;
  int count = 0;

  scanf("%d%d%d",&x,&y,&z);

  for(int i = x; i <= y; ++i)
  {
    if(z%i == 0)
      {
        count++;
      }
  }
  printf("%d\n", count);

}