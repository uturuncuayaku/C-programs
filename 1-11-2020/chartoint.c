#include <stdio.h>

int main(void){
  for(char ch = 'A'; ch <= 'Z'; ++ch){
    printf("%d\t",ch);
  }
  for(char ch = 'a'; ch <= 'z'; ++ch){
    printf("%d\t",ch);
  }
  return 0;
}
