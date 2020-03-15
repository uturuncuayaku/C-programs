#include <stdio.h>
int main(){
  int y,x;
  int t;
  for(;;){
    
    scanf("%d%d", &x, &y);
		if (x == 0 && y == 0) break;
		if (x > y) 
      t = x;
      x = y; 
      y = t;

    printf("%d %d\n", x, y);
  }

  return 0;
}