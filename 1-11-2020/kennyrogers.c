// kerry from quora teaching ppl how its to be done
#include <stdio.h>
char *strfromchar(char destination[], char source){
  destination[0] = source; // copy the character into the string
  destination[1] = '\0';  //null terminate the string

  return destination;   //common convention for str functions
}

int main(void){

  char mystring[2];
  char mychar;

  mychar ='x';
  printf("The string version of %c is %s\n",
      mychar, strfromchar(mystring,mychar));

  mychar = 'Q';
  printf("The string version of %c is %s\n",
      mychar, strfromchar(mystring,mychar));

  char * mystring2;
  size_t elements  =2;
  char mychar2;

  //allocate the array of characters
  mystring = malloc(elements*sizeof(char)); //just to be clear




  return 0;

}
