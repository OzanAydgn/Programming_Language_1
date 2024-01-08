// Write a program that assigns the digits of the maximum 5-digit number to an array and prints it to the screen.

#include <stdio.h>

int main() {

    int sayi, basamaklar[5], sayac = 0;

    printf("Maksimum 5 basamaklı bir sayı girin: ");
    scanf("%d", &sayi);

    while (sayi > 0 && sayac < 5) {
        basamaklar[sayac] = sayi % 10;
        sayi /= 10;
        sayac++;
    }

    printf("Girilen sayının basamakları:\n");
    for (int i = sayac - 1; i >= 0; --i) {
        printf("%d\n", basamaklar[i]);
    }

    return 0;
}