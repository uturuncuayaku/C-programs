#include <stdio.h>
int main(){
    int c;
    int inspace; // use a boolean
    inspace = 0;
    while((c = getchar()) != EOF){
        if(c == ' ')
        {
            if(inspace == 0)
            {
                    inspace = 1;
                    putchar(c);
            }
        }
        if(c != ' ')
        {
                inspace = 0;
                putchar(c);
        }
    }//while
    return 0;
}
