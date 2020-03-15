#include <stdio.h>
int main(void){
//*******************Variables******************************
  int n;
  char cardSuit;
  int cardRank;
  char ids[4] = {'S','H', 'C', 'D'};
//******************Initialize Full Deck********************
    int fullDeck[4][13];
    for(int id = 0; id < 4; id++){
      for(int rank = 0 ; rank < 13; rank++){
        fullDeck[id][rank] = 0;
        }}//end of nest for loop
//******************Start reading input********************
  char newlineCharacter;
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
    scanf(" %c %d", &cardSuit, &cardRank);
    for(int i = 0; i < 4; i++){
      if(ids[i] == cardSuit){
        fullDeck[i][cardRank] = 1;
        }}} // End of for loop, if loop and read loop
//*********************End of reading input****************
  for(int id = 0; id < 4; id++){
    for(int rank = 1 ; rank < 14; rank++){
      if( !(fullDeck[id][rank]) ){
      printf("\nMISSING: %c %d\n", ids[id], rank);
    }}}//end of nested for loop printing missing cards
  return 0;
}
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
// Alternate solutions
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

/*
  char* p = memchr(ids, cardFace, sizeof(ids));
  if(p!=NULL){
  int index = p - ids;
  fullDeck[index][cardValue];
}

  if(cardFace == 'S') {
    fullDeck[0][cardValue] = 1;
  }
  else if(cardFace == 'H'){
    fullDeck[1][cardValue] = 1;
  }
  else if(cardFace == 'C'){
    fullDeck[2][cardValue] = 1;
  }
  else if(cardFace == 'D'){
    fullDeck[3][cardValue] = 1;
  }

  switch(cardFace){
  case 'S':fullDeck[0][cardValue] = 1;break;
  case 'H':fullDeck[1][cardValue] = 1;break;
  case 'C':fullDeck[2][cardValue] = 1;break;
  case 'D':fullDeck[3][cardValue] = 1;break;
}

*/
