#include <stdio.h>
/* print Fahrenheit-Celsius table for fahrenheit
    fahr = 0, 20, ..., 300
*/
int main(){
    float fahr, celcius;
    int lower, upper, step;

    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size
    
    celcius = lower;

    printf("Celcius to Fahrenheit Conversion\n"); //header
    while(celcius <= upper){
        fahr = (celcius * (9.0/5.0)) + 32.0;
        printf("%3.0f\t%6.0f\n", celcius, fahr);
        celcius = celcius + (step-5);


    }
}
