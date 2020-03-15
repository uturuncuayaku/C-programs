/* "/home/b1nary001/documents/1-13-2020/ALP-CH-01/" */
#include <stdio.h>
#include <stdlib.h>
#include "reciprocal.hpp"

int main(int argc, char **argv){
  int i;
  i = atoi(argv[1]);
  printf("The reciprocal of %d is %g\n", i , reciprocal ( i ));
  return 0;
}
