#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[]){

  int SECONDS_IN_HOUR = 60*60;
  int SECONDS_IN_MINUTE = 60;
  
  // Get user input 
  int inputSeconds = 0;
  scanf("%d", &inputSeconds);

  int Display_hour = 0;
  int Display_second = 0;
  int Display_minute = 0;

 // Total seconds divided by seconds in one hour
 // Subtract total seconds from hours by seconds in one hour 
 // Seconds in minutes divided by seconds in one minute
 // Subtract seconds left from minutes left times seconds in one minute
  Display_hour = inputSeconds/SECONDS_IN_HOUR;

  int HOURS_calcSeconds = Display_hour * SECONDS_IN_HOUR;
  int remainingSeconds = inputSeconds - HOURS_calcSeconds;

  Display_minute = remainingSeconds/SECONDS_IN_MINUTE;    

  int MINUTES_calcSeconds = Display_minute * SECONDS_IN_MINUTE;
  Display_second = remainingSeconds - MINUTES_calcSeconds;

  printf("%d:%d:%d\n", Display_hour, Display_minute, Display_second);
  return 0;
}