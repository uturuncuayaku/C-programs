#include <stdio.h>
#define MAXLINE 1000
#define LONGESTLINE 80
int get_lines(char line[], int maxline);
int main(){
  int length;
  char line[MAXLINE];
  while( (length = get_lines(line,MAXLINE))  > 0){
    if(length > LONGESTLINE){
      printf("%s", line);
    }
  }
  return 0;
}//end of main

int get_lines(char s[], int line){
  int c, i, j;
  for(i =0, j =0; (c = getchar() ) != EOF && c != '\n'; ++i){
    if( i < line -1){
      s[j++] = c;
    }
  }//end of for

  if(c == '\n'){
    if(i < line - 1){//while buffer isnt full
      s[j++] = c;
    }
    ++i;
  }
  s[j] = '\0';
  return i;
}//end of get_lines
