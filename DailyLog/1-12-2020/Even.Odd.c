#include <stdio.h>
int main(){

  int EvenCount, OddCount,i;

  int a[10] = {2,3,4,5,6,7,8,9,10,11};
  EvenCount = 0;
  OddCount = 0;
  for(i=0;i<10; i++){
    if(a[i] % 2 == 0){
      EvenCount++;
    }else{
      OddCount++;
    }
  }//end of for
  putchar('\n');
  printf("Multiples of 3, 5, 7");
  for(i=0;i<11;i++){
    putchar('\n');
    printf("3: %d",3*i);
    putchar('\n');
    printf("5: %d",5*i);
    putchar('\n');
    printf("7: %d",7*i);
    putchar('\n');
  }
}
