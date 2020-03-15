#include <stdio.h>
int main(){
    int characterArray[127];
    int characterCount[127];
    int c;

    for(int i = 0; i < 127; i++){
        characterArray[i] = i;
    }
    for(int i = 0; i < 127; i++){
        characterCount[i] = 0;
        }

    while((c=getchar())!= EOF){
        if(c != ' ' && c != '\t' && c != '\n'){
            for(int i = 0; i < 127; i++){
                if(characterArray[i] == c){
                    ++characterCount[i];
                }//end of if
            }//end of for
        }//end of if now newline, tab and space
    }//end of while

    for(int i = 0; i < 127; i++){
        if(characterCount[i] != 0){
            printf("%c: ", characterArray[i]);
            for(int j = 0; j < characterCount[i]; i++){
                printf("*");
            }

            printf("\n");

        }//end of if character array is empty
     }//end of for loop
}//end of main
