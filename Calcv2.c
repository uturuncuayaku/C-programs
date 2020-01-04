#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

  int a, b, x;
  char buf[256], *p;
  char op;

  for(;;){

    gets(buf);
    p = buf;
    a = atoi(p);

    while(isspace(*p)) p++;
    while(isdigit(*p)) p++;
    while(isspace(*p)) p++;
    
    op = *p++;
    b = atoi(p);

    if( op == '+') x = a +b;
    else if( op == '-') x = a-b;
    else if( op == '*') x = a*b;
    else if( op == '/') x = a/b;
    else break;
    printf("%d\n",x);
  }
}