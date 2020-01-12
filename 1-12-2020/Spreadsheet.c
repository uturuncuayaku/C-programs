
#include <stdio.h>
int main(){

  int r,c,i,j;
  int table[201][201];
  scanf("%d%d",&r,&c);

  int rowSUM=0;
  for(i=0;i<r;i++){
    rowSUM = 0;
    for(j=0;j<c;j++){
      scanf(" %d", &table[i][j]);
      rowSUM += table[i][j];
    }
    table[i][c] = rowSUM;
  }
//inverting matrix to add up rows
  for(i=0;i<c+1;i++){
    rowSUM=0;
    for(j=0;j<r+1;j++){
      rowSUM += table[j][i];
    }
    table[r][i]=rowSUM;
  }

  for(i=0;i<r+1;i++){
    for(j=0;j<c+1;j++){
      printf("%d ", table[i][j]);
    }
    putchar('\n');
  }

  return 0;
}
