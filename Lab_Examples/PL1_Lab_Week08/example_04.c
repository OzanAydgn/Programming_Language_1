// Determine Whether a Temperature is Below or Above the Freezing Point.

#include <stdio.h>

int main() {
    float temperature;

    printf("Dereceyi Giriniz: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Sicaklik Donma Noktasinin Altinda.");
    } else if (temperature > 0) {
        printf("Sicaklik Donma Noktasinin Ustunde.");
    } else {
        printf("Sicaklik 0 Derece.");
    }

    return 0;
}