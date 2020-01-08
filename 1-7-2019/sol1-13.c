#include <stdio.h>

#define MAXWORDLENGTH 100

int main(void){

    int c;
    int wordsLen[MAXWORDLENGTH];
    int charCount = 0;

    /* Zeroing out my array of differing word lengths  */
    for( int zero = 0; zero <= MAXWORDLENGTH; zero++){
        wordsLen[zero] = 0;
    }

    while ( ( c = getchar() ) != EOF ) {

        if ( c != ' '
         && c != '\n'
         && c != '\t' )
        {
            ++charCount;
        }
        else
        {
            wordsLen[charCount] = wordsLen[charCount] + 1;
            charCount = 0;
        }

    }//end of while
    printf("\nHorizontal Histogram\n");
    for(int i = 0; i <= 9; i++){
        printf("%d", i+1);//column
        for(int j = 1; j < wordsLen[i]; j++ ){
            printf("*");
        }
        printf("\n");
    }
//=-=-=-==-=-==-=-=-=-=-=-=-=-==-//=-=-=-==-=-==-=-=-=-=-=-=-=-==-//=-=-=-==-=-==-=-=-=-=-=-=-=-==-



    printf("\nVertical Histogram\n");
    for(int i = 0; i < MAXWORDLENGTH; i++){
        printf("-");

    }

    printf("\n");

    for ( int i = 0; i < 100; i++ ){
        printf("%d",i);
        for(int i = 0; i < 30; i++){
            printf(".");
        }
    }

    for ( int j = 1; j < 30 ; j++ ){
        printf("%d",j);


    }
}
