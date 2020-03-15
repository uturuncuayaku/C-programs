#include <stdio.h>
int main(){
  int count = 0;
  int n,flag;
  printf("Numeric and Character data\n\n");
  printf("Type an integer, EOF to quit: ");

  while(( flag = scanf("%d", &n) ) != EOF){
    if(flag != 1) break;
    printf("n= %d\n",n);
    printf("Type an integer, EOF to quit:\n");
  }
  return 0;
}
