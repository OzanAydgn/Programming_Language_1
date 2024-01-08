// Write C code to add two numbers entered by user.

#include <stdio.h>

int main() {

    int sayi1,sayi2,toplam;

    printf("1. Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("2. Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

    toplam=sayi1+sayi2;
    printf("Sayilarinizin Toplami: %d", toplam);

    return 0;
}