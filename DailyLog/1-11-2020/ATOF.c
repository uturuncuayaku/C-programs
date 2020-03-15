/*
 * Looking for spaces from character array
 *  passed to the function from parameter.
 *
 * Next we look for a signed value for our integer
 *  from character array stream.
 *
*/
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-
/*                                       *                                    *
 * Comments detailing helper variables   *                                    *
 * and comments detailing checks         *   // Comments manipulating buffer  *
 *                                       *                                    *
 *                                       *                                    *
 //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-

/* atof: convert string s to double */
#include <ctype.h>
#include <stdio.h>
//signature: double
//name: atof
//parameters: char array
double atof(char s[]){
// initializing variables
  double val, power;
  int i, sign;

  for(i = 0; isspace( s[i] ); i++)            // Skip white space in buffer
    ;
  // Creating signed value to multiply
  //  string converted from read value
  sign = (s[i] == '-') ? -1 : 1;
  printf("Sign\t%d\n", sign);
  if( s[i] == '+' || s[i] == '-' )            // Looking for positive
                                              //  string signs as well
    i++;                                      //  then incrementing
                                              //  pointer to buffer
  for(val = 0.0; isdigit(s[i]); i++)         // Find numbers
    printf("1.s[i]\t %c",s[i]);
    val = 10.0 * val + (s[i] - '0');
    printf("\n1.VAL\t%g",val);
  if(s[i] == '.')                             // Looking for decimal places
      i++;                                    //  within string buffer
  for(power = 1.0; isdigit(s[i]); i++)       // Right side of decimal point
    val = 10.0 * val + (s[i]-'0');
    printf("\n2.VAL\t%g",val);
    power *= 10;
    printf("\n1.Power\t%g",power);

  return sign * val / power;
}
/*=-=-*-=*=-=-**=-=-**=-=-*- Start debugging *=-*=-=-*=-**=-=-**=-=-**=-=-*/

int main(void){

  double myDbl = 0.0;
  char myString[] = "1.23";
  printf("\nValue of string: %s is %g as a double.", myString, atof(myString) );
  putchar('\n');

  for(int i = 0; i < 5; i++){
    //if( myString[i] != '\0'){
      printf("%c",myString[i]);
    }
  return 0;
}
/*=-=-*-=*=-=-**=-=-**=-=-*- End debugging *=-*=-=-*=-**=-=-**=-=-**=-=-*/
