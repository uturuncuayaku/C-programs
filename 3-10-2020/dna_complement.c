/* Note:
    Allocate memory yourself!
*/

#include <stdlib.h>
int getL(char *s);

char *dna_strand(const char *dna)
{
  // 
  // get length of dna
  // create swap array malloc(len_dna * sizeof(char))
  // loop through each character
  // found A
  // swap with T
  // save index of A at swaparray index of A with the letter T
  // next character
  // found C 
  // swap with T
  // return new string created from swap
  int len_dna = getL(dna);
  char *string = malloc(sizeof(char) * len_dna + 1);
  char *str = string;
  int i = 0;
  while(dna[i] != '\0')
  {
    if (dna[i] == 'T')
      string[i] = 'A';
    if (dna[i] == 'A')
      string[i] = 'T';
    if (dna[i] == 'G')
      string[i] = 'C';
    if (dna[i] == 'C')
      string[i] = 'G';
      
     i++;
  }
  string[i++] = '\0';
    return (str);
}
int getL(char *s)
{
  int l = 0;
  while(*s++)
    l++;
  return (l);
}