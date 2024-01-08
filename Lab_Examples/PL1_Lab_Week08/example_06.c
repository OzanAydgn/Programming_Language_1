// Write C code to convert the length in feet to centimeter.

#include <stdio.h>

int main() {

    float santimetre,feet;

    printf("Feet Uzunlugunu Giriniz: ");
    scanf("%f", &feet);

    santimetre= feet * 30.48;

    printf("Santimetre Cinsinden Uzunlugunuz: %f", santimetre);


    return 0;
}