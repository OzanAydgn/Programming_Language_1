// Write a C program to check whether a given number from keyboard is Palindrome number or not.

#include <stdio.h>

int main() {
    int sayi, sayi_kayit, sayi_tersten = 0, kalan;

    printf("Bir Sayi Giriniz: ");
    scanf("%d", &sayi);

    sayi_kayit = sayi;

    while (sayi != 0) {
        kalan = sayi % 10;
        sayi_tersten = sayi_tersten * 10 + kalan;
        sayi /= 10;
    }

    if (sayi_kayit == sayi_tersten) {
        printf("%d Palindrom Sayidir.\n", sayi_kayit);
    } else {
        printf("%d Palindrom Sayi Degildir.\n", sayi_kayit);
    }

    return 0;
}