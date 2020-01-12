#include <ctype.h>

/* atof: convert string to double in scientific notation */
double atofs(char s[]){

  int i;
  i = 0;
  while(isspace(s[i])
    i++;

  sign = (s[i] == '-') ? -1: 1;

  if(s[i] == '+' || s[i] == '-' )
    i++;

  (val = 0.0; isdigit(s[i]); i++)
  {
    val = 10.0 * val + (s[i] - '0');
  }
  if(s[i] == 'e'){

  }


}//end of function
