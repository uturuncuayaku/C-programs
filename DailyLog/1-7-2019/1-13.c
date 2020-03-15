#include <stdio.h>
int main(){

    int c = 0;
    int charCount =0;
    int lengthwidth = 0;
    int wordCount = 0;

    while((c=getchar()) != EOF){
        charCount ++;

        putchar(c);

    }

    printf("Character Count: %d\n", charCount);
    lengthwidth = charCount;

    for(int i = 0; i < lengthwidth; i++){
        printf("-");

    }

    printf("\n");

    for(int i = 0; i < (lengthwidth); i++){

        printf("| %d", (i+1));

        for(int j = 0;j < (lengthwidth);j++ ){
            printf(" ");
        }

        printf("|\n");
    }

    for(int i = 0; i < lengthwidth; i++){
        printf("-");

    }

}
