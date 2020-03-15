#include <stdio.h>
int countDigits(long pointer)
{

}
int main(){
  char c, *ptr_c;
  c = 'A';
  printf("c: address=%p, content=%c\n", &c,c);
  ptr_c = &c;
  printf("pointer to c: address=%p, content=%p\n",&ptr_c,ptr_c);
  printf("*ptr_c => %c\n", *ptr_c);
  *ptr_c = 'B';
  printf("ptr_c: address=%p, content=%p\n",&ptr_c, ptr_c);
  printf("*ptr_c => %c\n", *ptr_c);
  printf("c: address=%p, content=%c\n", &c, c);

  printf("c in hex is %x", ptr_c);

  return 0;
}
