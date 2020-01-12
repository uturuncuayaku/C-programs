#include <stdio.h>
int main(){
  int size, i, a[10], b[10],
      addition[10],subtraction[10],multiplication[10],
      modulo[10];
  float division[10];

//  printf("Size of Array:");
//  scanf("%d", &size);

  size = 10;

  a[] = {1,2,3,4,5,6,7,8,9};
  b[] = {1,2,3,4,5,6,7,8,9};


  for(i=0; i < size;i++){
    addition[i] = a[i]+b[i];
    subtraction[i] = a[i]-b[i];
    multiplication[i] = a[i]*b[i];
    division[i] = a[i]/b[i];
    modulo[i] = a[i]%b[i];
  }
  for(i=0;i<size;i++){
    printf("\nAddition: %d: ", addition[i]);
    printf("\nSubtraction: %d: ", subtraction[i]);
    printf("\nMultiplication: %d: ", multiplication[i]);
    printf("\nDivision: %f: ", division[i]);
    printf("\nModulo: %d: ", modulo[i]);
  }


}
