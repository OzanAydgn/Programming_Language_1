// Write a C program for computing factorial N (N!).

#include <stdio.h>

int main() {
    int i, fact = 1, sayi;

    printf("Bir Sayi Giriniz: ");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++) {
        fact = fact * i;
    }

    printf("%d Sayisinin Faktoriyeli: %d\n", sayi, fact);

    return 0;
}