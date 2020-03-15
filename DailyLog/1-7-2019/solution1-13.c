/* Vertical Histogram of words in a Sentence */
#include<stdio.h>

int main(void)
{
//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-
  int word[25];
  int i,c,j,y,x;
//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-
  for( i = 0 ; i < 25 ; ++i )
    word[i] = 0;
  x = y = 0;
//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-
  while( (c=getchar()) != EOF)
  {
    ++y;//has a max of 20
    if( c == ' ' || c == '\n' || c == '\t' )
    {
      word[x] = y - 1; /* -1 for excluding the space in the word length */
      ++x;
      y = 0; /* resetting the word-length for the next word */
    }
  }
//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-//=-=-=-=-

  for ( i = 20; i >= 1; --i ) // traversing backwards and placing stars at the top of histogram
  {
    for ( j = 0; j <= x ; ++j )
    {
      if( i <= word[j] )
        putchar('*');
      else
        putchar(' ');
      }
  putchar('\n');
  }

return 0;
}
