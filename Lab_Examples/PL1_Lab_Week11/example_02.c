// Write a C program that takes two words from keyboard and prints the reverse of first word after second word. Sample program execution is as shown below.

#include <stdio.h>
#include <string.h>

int main() {

    char kelime1[50], kelime2[100];

    printf("Birinci kelimeyi girin: ");
    scanf("%s", kelime1);

    printf("Ikinci kelimeyi girin: ");
    scanf("%s", kelime2);

    char tersKelime1[50];
    int uzunluk = strlen(kelime1);
    for (int i = 0; i < uzunluk; ++i) {
        tersKelime1[i] = kelime1[uzunluk - i - 1];
    }
    tersKelime1[uzunluk] = '\0';

    strcat(kelime2, " ");
    strcat(kelime2, tersKelime1);

    printf("Sonuc: %s\n", kelime2);

    return 0;
}