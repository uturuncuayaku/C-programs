//pattern finding
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

  char s[100]={0};
  char p[100]={0};
  char cpy[202]={0};

  scanf("%s%s", s, p);

  strcpy(cpy,s);
  strcat(cpy,s);

  if( strstr(cpy,p) != NULL ){
      printf("Yes");
    }
    else{
      printf("No");
    }

    return 0;

}
