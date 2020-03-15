#include <stdio.h>
#include <stdlib.h>

void bye(void){
  puts("Goodbye, cruel world...");
}
int main(){
  atexit(bye);
  exit(EXIT_SUCCESS);
}
