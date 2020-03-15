#include <stdio.h>
#include <ctype.h>

int main(){
  char s[1300];
  int count[26], si, i=0;

  for ( i = 0; i<26; i++){
    count[i]=0;
  }

  while(scanf("%c",&s) != EOF ){
    for( si=0;  s[si]!='\0' ; si++ ){
        if( tolower( s[si] ) && isalpha( s[si]  )  ){
          count[ s[si]-'a' ]++;
            }}}

  for( i=0; i<26; i++ ){
    printf("%c : %d\n",'a' + i, count[i]);
      }
  return 0;

}
