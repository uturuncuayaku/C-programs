/**
 * Seperates a number into three parts: a sign (+, -, or blank)
 * a whole number magnitude, and a fractional part.
 */
void seperate(double num, /* input - value to be split */
			  char *signp, /* output - sign of number */
			  int *wholep, /* outputa - fractional part of number */
			  double **fracp) /* output - fractional part of number */
{
	double magnitude;

	/* determine sign of num */
	if (num < 0)
		*signp = '-';
	else if (num == 0)
		*signp = ' ';
	else 
		*signp = '+';

	/* Finds magnitude of num (its absolute value) and
	   seperate it into whole and fractional parts */
	magnitude = fabs(num);
	*wholep = floor(magnitude);
	*fracp = magnitude - *wholep;
}
