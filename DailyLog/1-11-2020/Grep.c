#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

/* Program to find all lines matching pattern */
int main(void){

  char line[MAXLINE];
  int found = 0;//count for patterns found
  while(getline(line,MAXLINE) > 0){
    if(strindex(line,pattern) >= 0){
      printf("%s", line);
      found++;
    }
  return found;
  }
  return 0;
}


  /* getline: get line into s, return length */
int getline(char s[], int lim){
  int c, i;
  i=0;
  while( --lim > 0 && (c=getchar())!=EOF && c!= '\n' ){
      s[i++] = c;
  }//end while

  if(c=='\n')
    s[i++] = c;
  s[i] = '\0';

  return i;
}//end getline

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[]){
  int i,j,k;

  for(i = 0; s[i] != '\0'; i++){
    for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++ ){}//nested loop
    if(k >0 && t[k] =='\0'){
      return i;
      }//end of if
        }//end of first for loop

  return -1;

}
/* rstrindex: return index of t in right most occurrence of s */
int rstrindex(char s[], char t[]){
  int i,j,k;
  int m = -1;
  for(i=0; s[i] != '\0'; i++){
    for(j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++){}
    if( k>0 && t[k] == '\0'){
      m = i;
    }//end of if
  return m;
}//end of function
