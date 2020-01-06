#include <stdio.h>
int main(){

    int c;
    int ch = 0;
    int spaces = 0;
    int newlines = 0;
    int tabs = 0;


    while(( c = getchar() ) != EOF){
        if( c == ' ' ) ++spaces;
        if( c == '\n' ) ++newlines;
        if( c == '\t' ) ++tabs;
        if( c ) ++ch;

    }//while
    printf("Characters: %d\n", ch);
    printf("Lines: %d\n", newlines);
    printf("Tabs: %d\n",tabs);
    printf("Spaces: %d\n",spaces);



return 0;
}//main
