//Write a program that transfers the numbers given until -1 is entered from the keyboard, and then prints the square of each element to the screen. (The number of array elements will be maximum 10.)

#include <stdio.h>

int main() {

    int sayilar[10];
    int girilen_sayi, sayac = 0;

    printf("Tam sayıları girin (maksimum 10) ve sonlandırmak için -1 girin:\n");

    do {
        printf("%d. değeri girin: ", sayac + 1);
        scanf("%d", &girilen_sayi);

        if (girilen_sayi != -1 && sayac < 10) {
            sayilar[sayac] = girilen_sayi;
            sayac++;
        } else {
            break;
        }

    }
while (1);

    printf("Girilen değerlerin kareleri:\n");
    for (int i = 0; i < sayac; ++i)
    {
        printf("%d'nin karesi: %d\n", sayilar[i], sayilar[i] * sayilar[i]);
    }

    return 0;
}