#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  double r = 0.0;
  scanf("%lf",&r);

  double area = M_PI*(r*r);
  double circ = 2*M_PI*r;

  printf("%lf %lf\n", area, circ);
}