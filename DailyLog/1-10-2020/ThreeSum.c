#include <stdio.h>
int main(){

  int n=0, x=0;
  int i,j,k,count;

  while(1){
    count = 0;
    scanf("%d %d", &n,&x);

    if(x==0 && n==0){
        break;
    }
    else{
      for(i=1; i<=n;i++){
        for(j=i+1; j<=n; j++){
          for(k=j+1; k<=n; k++){
            if(i+j+k==x){
              count++;
            }
          }
        }

      }
    }//end of else
    printf("%d\n",count);//not processing 0 0 input condition
  }//end of while
  return 0;
}
