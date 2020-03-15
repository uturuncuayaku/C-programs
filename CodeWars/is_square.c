#include <stdbool.h>
#include <math.h>

bool is_square(int n) {
  int bool_int = 0;
  double square = sqrt(n);
  int check = sqrt(n);
  
  if (check == square) bool_int = 1;
  else bool_int = 0;
  
  return bool_int;

}
