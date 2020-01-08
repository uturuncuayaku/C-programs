/*  Insert an element at a specific position
 *  in the array.
*/

#include <stdio.h>
int main(){
  int myArray[100] = {0};
  int index, x, position, n = 10;

  //initialize arr of size 10
  for(index = 0; index < 10; index++){
    myArray[index] = index+1;
  }

  //print the original arrays
  for(index = 0; index < n; index++){
    printf("%d ", myArray[index]);
  }
  printf("\n");

  //element
  x = 50;

  //increas the size of array by 1
  n++;

  //shift elements forward
  for(index = n; index >= position; index--){
    myArray[index] = myArray[index-1];
  }

  // print the updated array
  for(index = 0; i < n; i++){
    printf("%d ", myArray[index]);
  }
  printf("\n");

}
