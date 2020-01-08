//arrays
#include <stdio.h>
int main(){

    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;

    for(i = 0; i < 10; ++i){
        ndigit[i] = 0;//zeroing out array

    }
    while((c=getchar()) != EOF){

        if(c >= '0' & c <= '9'){//checks whether c is digit
            ++ndigit[c-'0'];

        }else if(c == ' ' || c == '\n' || c == '\t'){ //checks if c is space or newline
            ++nwhite;
        }else
            ++nother;
    }

    printf("digits =");
    for(i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);
    }

    printf(", white space = %d, other = %d\n", nwhite,nother);

}//main
