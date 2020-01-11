#include <stdio.h>
int main(){
  int i,j,R,C,sum,total;
  int table[101][101];

  scanf("%d%d",&R,&C);

  for(i=1; i< R;i++){
    for(j=1; j< C;j++){
      scanf("%d ", &table[i][j] );
    }
  }


  for (i=1; i<R; i++) {
    sum = 0;
    for (j=1; j<C; j++) {
      sum += table[i][j];
    }
    table[i][0] = sum; //sum of column
  }

  total = 0;
  for (i=1; i<R; i++) {//4 iterations
    sum = 0;
    for (j=1; j<C; j++) { //5 iterations
      sum+=table[i][j];
    }
    table[0][j] = sum; //sum of rows
    total += sum;
  }
putchar('\n');
    for(i=0; i< R+1;i++){
      for(j=0; j< C+1;j++){
        printf("%d ", table[i][j]);
      }
      putchar('\n');
    }





  return 0;
}
