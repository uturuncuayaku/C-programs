
#include <stdio.h>

#define MAXLINES 80
#define BUFFER 1000

int getLines1(char line[], int size);
void copyCharacters(char to[], char from[]);

int main(){
  int max;
  int length;
  char line[BUFFER];
  char line1[BUFFER];
  max = 0;
  while
  ( (length = getLines1(line, BUFFER )) > 0 ){

      if( length > MAXLINES){
        copyCharacters(line1,line);
        printf("%s",line1);
      }
      length = 0;

  }

  //print array of characters
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
   //printf("%c",from[i]);
    ++i;
}
