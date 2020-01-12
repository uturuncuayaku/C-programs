#include <stdlib.h>
#include <ctype.h>

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

static int maxExponent = 511;	/* Largest possible base 10 exponent.  Any
				                      * exponent larger than this will already
				                      * produce underflow or overflow, so there's
				                      * no need to worry about additional digits.
				                      */
static double powersOf10[] = {	/* Table giving binary powers of 10.  Entry */
    10.,			/* is 10^2^i.  Used to convert decimal */
    100.,			/* exponents into floating-point numbers. */
    1.0e4,
    1.0e8,
    1.0e16,
    1.0e32,
    1.0e64,
    1.0e128,
    1.0e256
};

/*
 *---------------------------------------------------------------------
 *
 *  atof --
 *    This program converts a floating point number from an ASCII decimal
 *    representation to internal double-precision format.
 *
 *  Results:
 *    The return value is the floating-point equivalent of string.
 *    If a terminating character is found before any floating-point
 *    digits, then zero is returned.
 *
 *   Side effects:
 *      None.
 *
 *------------------------------------------------------------------------
 *
 */

double
 atof(string)

char *string;

/* Decimal ASCII floating point number,
 * optionally preceded by white space.
 * Must have form "-I.FE-X", where I is the
 * integer part of the mantissa, F is the
 * fractional part of the mantissa, and X
 * is the exponent.
 * Either pos or neg signs may be ommitted.
 * Either I or F may be omitted, or both.
 * Neither is the decimal point needed nor
 * necessary unless F is present.
 * The E may actually be e. E and X may both
 * be omitted inclusively or not included at all.
 */

{
  int sign, expSign = FALSE;
  double fraction, dblExp, *d;
  register char *p, c;
  int exp = 0; // exponent
  int fracExp = 0;

  int mantSize; // number of digits in mantissa
  int decPt;

  char *pExp; // temporarily holds location of exponent in string

  //Strip off leading blanks and check for a sign.

  p = string;
  while(isspace(*p)){
    p+=1;
  }
  if(*p == '-'){
    sign = TRUE;
    p += 1;
  }else{
    if(*p == '+'){
      p += 1;
    }
    sign = FALSE;
  }

  decPt = -1;
  for(mantSize = 0; mantSize += 1){ c = *p;
    if(!isdigit(c)){
      if((c!='.') || (decPt >= 0)){break;}
      decPt = mantSize;
    }
    p+= 1;
  }

  pExp = p;
  p -= mantSize;
  if(decPt < 0){
    decPt = mantSize;
  }else{
    mantSize = -1;
  }








}
