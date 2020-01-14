/* Printing the execution environment */
#include <stdio.h>
/* The environ variable contains the environment. */
extern char** environ;

int main(){
  char ** var;
  for(var = environ; *var != NULL; ++var){
    printf("%s\n", *var);
  }
}
