#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){

  int i, sum;
  char s[10000];
  while( scanf("%s",s)==1 && strcmp(s,"0")!=0 ){
    sum=0;
    for(i=0;s[i]!='\0';i++){
      sum+=(s[i]-'0');
    }printf("%d\n",sum);
  }

  return 0;
}
