#include <stdio.h>
int main(){
  int b=0,f=0,r=0,v=0,n=0;
  int p[5][4][11];
  for(b = 1; b <= 4; b++){// Buildings
    for(f = 1; f <= 3; f++){// Floors
      for(r = 1; r <= 10; r++){// Rooms
        p[b][f][r] = 0;
          }}}//end of initializing multi-dimensional array to zero
/******************READ INPUT*******************************/
  scanf("%d",&n );
  for(int i = 0; i < n; i++){
    scanf(" %d%d%d%d",&b,&f,&r,&v );
    p[b][f][r] = p[b][f][r] + v;
  }
/**********************PRINT*******************************/
  for(b = 1; b <= 4; b++){// Buildings
    for(f = 1; f <= 3; f++){// Floors
      for(r = 1; r <= 10; r++){// Rooms
        printf(" %d", p[b][f][r]);
      }
      putchar('\n');
    }
    if(b<4) printf("####################\n");
  }// End of loops for printing building, rooms, and people.
  putchar('\n');
  return 0;
}
