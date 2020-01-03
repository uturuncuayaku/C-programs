#include <stdio.h>
#include <stdlib.h>

void ConvertSecondsToDays(int na){

  int day = na / (24 * 3600);
  na = na % (24*3600);// n mod minutes in one day
  int hour = na / 3600;

  na = na % 3600;//hours mod 3600
  int minutes = na/60;
  na = na % 60; // minutes mod 60
  int seconds = na;

  printf("%d Days and %d:%d:%d\n",day,hour,minutes,seconds);


}

int main(){
  ConvertSecondsToDays(46979);

}