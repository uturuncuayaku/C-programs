#include <stdio.h>
#include <stdlib.h>
int main(){
    int x;
    char buf[100];

  for(int i = 1; ; ++i){
    gets(buf);
    x = atoi(buf);
    if(x ==0) break;
    printf("Case %d: %d\n",i ,x);   
    }
    return 0;
}