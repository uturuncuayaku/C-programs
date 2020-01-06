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

    fahr = lower;

    printf("Fahrenheit\tto\tCelcius Conversion\n");//header
    while(fahr <= upper){
        celcius = (5.0/9.0) * (fahr-32);
        //fahr = celcius * (9.0/5.0) + 32;
        printf("%3.0f\t%6.0f\n", fahr, celcius);
        fahr = fahr + step;
    }

}
