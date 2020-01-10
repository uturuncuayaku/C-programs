#include <stdio.h>
int main(){
  int cnt,n;
  printf("Numeric and Character data\n\n");
  printf("Type an integer, EOF to quit: ");
  cnt = 0;
  while( (scanf("%d\n",&n) != EOF) && cnt<4){
    printf("n = %d\n",n);
    cnt = cnt + 1;
    printf("Type an integer, EOF to quit: ");
  }
  return 0;
}
