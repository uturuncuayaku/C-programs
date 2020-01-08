#include <stdio.h>
#define MAXLINE 1000

/*
 * Protyping functions

*/
int getLines1(char line[], int max);
/*
 * void because char to and char from
 * are reference to arrays and not copied
*/
void copyCharacters(char to[],char from[]);

int main(){
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while((len = getLines1(line, MAXLINE)) > 0){
    if( len > max){
      max = len;
      copyCharacters(longest,line);
      printf("len:%d\n",len );
      break;
    }
  }

  if(max > 0){
    printf("%s\n", longest);
  }

  return 0;
}

int getLines1(char s[], int limit){
  int c, i;
  for(i = 0; i < limit-1 && ( c = getchar() ) != EOF && c != '\n'; i++){
    s[i] = c;
  }
  if(c == '\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;

}
void copyCharacters( char to[], char from[] ){
  int i;
   i = 0;
   while((to[i] = from[i]) != '\0')
    ++i;
}
