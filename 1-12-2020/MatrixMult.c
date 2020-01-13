#include <stdio.h>
int main(){
  long long n,m,l;
  int i,j,k;
  long long a[300][300],b[300][300],c[300][300];

  scanf("%lld%lld%lld",&n,&m,&l);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf(" %lld",&a[i][j]);
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf(" %lld",&b[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
        c[i][j] += a[i][k]*b[k][j];
      }
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<l-1;j++){
      printf("%lld ",c[i][j]);
    }
    printf("%lld\n",c[i][j]);
  }
  return 0;
}
