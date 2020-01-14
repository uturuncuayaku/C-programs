#include <stdio.h>
#include <getopt.h>

int main( int argc,char* argv[] ){
  printf( "Name of this program is '%s'.\n", argv[0] );
  printf( "This program was invoked with %d arguments.\n", argc-1 );

  /* were any commandline arguments specified */
  if(argc >1){
    /* yes, print them. */
    int i;
    printf("The arguments are: \n");
    for(i=0; i<argc;i++)
      printf(" %s\n",argv[i]);
  }
}
