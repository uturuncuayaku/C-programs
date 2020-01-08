#include <stdio.h>

void FahrTempConversion(double fahrenheit);
void CelciusTempConversion(double celcius);

int main(){
    double a = 32;
    FahrTempConversion( a );
    double b = 0;
    CelciusTempConversion( b );
    return 0;
}
void FahrTempConversion(double f){
    double cel = 0.0;
    double step = 5.0;

    for(int i = 0; i<10; i++){
        cel = ((f-32)*5)/9;
        printf("\nFahrenheit: %.2f\n   Celcius: %6.2f\n", f, cel);
        f = f + step;
    }
}
void CelciusTempConversion(double c){
    double fahr = 0.0;
    double step = 5.0;

    for(int i = 0; i<10; i++){
        fahr = c*(9/5)+32;
        printf("\nCelcius:%9.2f\nFahrenheit: %.2f\n", c,fahr);
        c = c + step;
    }
}
