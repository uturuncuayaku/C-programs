#include <stdio.h>
int main(){
    int c, d;
    while( (c=getchar() ) != EOF ){
        d = 0 ;
        if( c == '\\' ){
            putchar('\\');
            putchar('\\');
            //printf("%d",c);
            d = 1;
        }
        if( c =='\t' ){
            putchar('\\');
            putchar('t');
            d = 1;
            //printf("%d",c);

        }
        if( c == '\b' ){
            putchar('\\');
            putchar('b');
            d = 1;
            //printf("%d",c);

        }
        if( d == 0 ){
            putchar(c);
            //printf("%d",c);

        }
        printf();
    }
    return 0;
}
