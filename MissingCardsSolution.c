#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

  /* Initializing variables
   ************************************************************************
   * Card ID:
   *    The Suit - Spades, Hearts, Clubs, Diamonds
   * Card Rank:
   *    The value 1-13
   * Specifications
   *    "Print cards of spades, hearts, clubs and diamonds in this order."
   *    "A rank is represented by an integer from 1 to 13."
   *
   ************************************************************************
   */
  int n;
  int id, rank;

  short card[4][14];  // Short int range(-32k to +32k) "%hi"
  char buf[104], *p;  // Buffer and Pointer to Buffer
  char ids[4] = {'S','H', 'C', 'D'};

  for(id = 0; id < 4; id++){
    for(rank = 1; rank <= 13; rank++){
      card[id][rank] = 1;
    }}//end of nested for loops

  gets(buf);
  n = atoi(buf);

  for(int i = 0;i<n; i++){
    gets(buf);
    p = buf;
    while( isspace(*p) ) p++;

    switch(*p){
      case 'S': id = 0;break;
      case 'H': id = 1;break;
      case 'C': id = 2;break;
      case 'D': id = 3;break;
    }//end of switch
    rank = atoi(++p);
//		printf("id=%d, rank=%d\n", id, rank);
    card[id][rank] = 0;

  }//end of for loop reading the id and rank


  for(id = 0; id < 4; id++){
    for(rank = 1; rank <= 13; rank++){
      if (card[id][rank]) printf("%c %d\n", ids[id], rank);
    }}//end of nested for loops


return 0;
}//end of main
