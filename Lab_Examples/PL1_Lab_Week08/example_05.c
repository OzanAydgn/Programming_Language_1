// Convert Temperature from Fahrenheit (℉) to Celsius (℃).

#include <stdio.h>

int main() {

    float celsius,fahrenheit;

    printf("Fahrenheit'ı Giriniz: ");
    scanf("%f", &fahrenheit);

    celsius=(fahrenheit-32) * 5.0/9.0;

    printf("Celsius Degeriniz: %f", celsius);


    return 0;
}