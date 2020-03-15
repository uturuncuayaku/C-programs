#include <stdio.h>
#define ASCIICOUNT 127

int main(){
  int c;
  int chararray[ASCIICOUNT];
  int countarray[ASCIICOUNT];
  int counter, counter1;

  for(counter = 0; counter < ASCIICOUNT; ++counter){
    countarray[counter] = 0;
  }
  counter = 0;
  for(counter = 0; counter < ASCIICOUNT; ++counter){
  chararray[counter] = counter;
  }

  counter = 0;
  while((c = getchar()) != EOF){
    if(c != ' ' && c != '\t' && c != '\n'){
      ++counter;
      for(counter1 = 0; counter1 < ASCIICOUNT; ++counter1){
        if(chararray[counter1] == c){
          ++countarray[counter1];
        }
      }
    counter1 = 0;
    }
  }
  counter1  = 0;
  counter = 0;
  for(counter1; counter1 < ASCIICOUNT; ++counter1){
    if(countarray[counter1] != 0){
      printf("%c: ",chararray[counter1]);
      for(counter = 0; counter < countarray[counter1]; ++counter){
        putchar('*');
      }
      putchar('\n');
    }
  }
 }
