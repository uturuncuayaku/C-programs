#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
  //char s[2400]={0};                   <--only prints 'fAIR,'
  //char s;                             <--segmentation fault
  //char s[2400];                       <--only prints 'fAIR,'
  // scanf("%s",&s);
  // printf("%s\n",s);
/*
  char buffer[2400];
  char *p,c;
  fgets(buffer);
  p = buffer;

  while(*p){
    c = *p++;
    putchar(c);
  }
//==-=-=--=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=--=-==-
*/



  char s[2400];
  scanf("%[^\n]",s);

  int p, i;
  while( s[p]!='\0' ){
    p++;
  }
  for( i=0; i<p; i++ ){
    if( islower(s[i]) ){
      s[i]=toupper(s[i]);             /* Subtract 32 from individual character */
    }else if( isupper(s[i]) ){        /* to convert uppercase character to lower */
      s[i]=tolower(s[i]);             /* Add 32 to individual character */
    }                                 /* to convert from lowercase to upper */
  }
  printf("%s\n",s);

  return 0;

}
