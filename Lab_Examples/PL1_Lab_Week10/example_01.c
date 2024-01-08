// Enter a value from the keyboard to the 8-element float array. Calculate the average of the entered values and print it on the screen.

#include <stdio.h>

int main() {

    float numbers[8];

    printf("8 Adet Sayi giriniz:\n");

    for (int i = 0; i < 8; ++i)
    {
        printf("%d. Sayiyi Giriniz : ", i + 1);
        scanf("%f", &numbers[i]);
    }

    float sum = 0.0;
    for (int i = 0; i < 8; ++i)
    {
        sum += numbers[i];
    }
    float average = sum / 8;

    printf("Girilen Sayilarin Ortalamasi: %.2f\n", average);

    return 0;
}