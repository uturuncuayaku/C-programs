#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[]){
    float blah = 0.0;
    scanf( "%f", &blah);

    printf( "%d\n", (int)pow(blah,3) );
    return 0;
}