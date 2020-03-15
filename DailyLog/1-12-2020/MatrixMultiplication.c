#include <stdio.h>
int main(){
  int n,m,l;
  int i,j,k;
  int a[300][300],b[300][300],c[300][300];

  scanf("%d%d%d",&n,&m,&l);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf(" %d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf(" %d",&b[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
        c[i][j] += a[i][k]*b[k][j];
      }
      //printf("%d ",a[i][j]);
    }
    //putchar('\n');

  }
  putchar('\n');

  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      printf("%d ",c[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
