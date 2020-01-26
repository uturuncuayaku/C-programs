#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){

  char s[] = "HelIo";
  char *sp = s;
  char t[] = "lo";
  char *tp = t;

  printf("s: %s", s);
  putchar('\n');
  printf("t: %s", t);
  putchar('\n');
  //-=-=-=
  printf("*sp: %c", *sp);
  putchar('\n');
  printf("*tp: %c", *tp);
  putchar('\n');
  //-=-=-=
  printf("*sp++: %c", *sp++);
  putchar('\n');
  printf("*tp++: %c", *tp++);
  putchar('\n');
  //-=-=-=
  printf("Post increment. *sp: %c", *sp);
  putchar('\n');
  printf("Post increment. *tp: %c", *tp);
  putchar('\n');
  //-=-=-=
  printf("Length. *sp: %d", strlen(s));
  putchar('\n');
  printf("Length. *tp: %d", strlen(t));
  putchar('\n');
  //-=-=-=
  printf("Post increment. Still Same value. *sp: %c", *sp);
  putchar('\n');
  printf("Post increment. ^^^. *tp: %c", *tp);
  putchar('\n');
  //-=-=-=
  printf("sp=s..resetting pointer position");
  sp = s;
  sp += strlen(s) - strlen(t);
  printf("sp += strlen(s) - strlen(t)%c",*sp);
  putchar('\n');












  return 0;
}
