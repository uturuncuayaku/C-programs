#include <stdio.h>
#include <stdlib.h>

int main(){
  int H, W;
  while(1){
    scanf("%d%d", &H, &W);
                                      // 0 0 breaks while loop
    if(H == 0 && W == 0) break;
                                      //Top border
    for ( int w = 0; w < W; w++){
      printf("#");
    }
    printf("\n");                     //one line top border finished need new line
                                      //Double for loop for dots surrounded by pound signs
                                      //starting little height at 2 because top and bottom
                                      //are printed already. Only edges with '#' 
                                      //are framing the border with '.' in the middle.
    for ( int h = 2; h < H; h++){
      printf("#");                    //Left side characters of Frame
      for( int w = 2; w < W; w++){    //Starting width at 2 because the two 
        printf(".");                  //opposite edges are '#' characters.
      }
      printf("#");                    
      printf("\n");                   /*for(int w = 0; w < ( W - 2 ); w++) //is valid as well*/
    }                                 
                                      //Dots spanning minus two all the way across row.
                                      //Right side characters of Frame
                                      //Bottom border
    for ( int w = 0; w < W; w++){
      printf("#");                    //One line of '#' characters
    }                                      
    printf("\n");                     //Double new lines to pass
    printf("\n");                     //Double new lines to pass
  }
  return 0;

}

/*

Input

3 4
5 6
3 3

Output

####
#..#
####

######
#....#
#....#
#....#
######

###
#.#
###

*/