// Write C code to find the largest of three numbers A, B, and C.

#include <stdio.h>

int main() {
    float A, B, C;

    printf("A Degerini Giriniz: ");
    scanf("%f", &A);

    printf("B Degerini Giriniz: ");
    scanf("%f", &B);

    printf("C Degerini Giriniz: ");
    scanf("%f", &C);

    if (A >= B && A >= C) {
        printf("En Buyuk Sayi A'dir.\n");
    } else if (B >= A && B >= C) {
        printf("En Buyuk Sayi B'dir.\n");
    } else {
        printf("En Buyuk Sayi C'dir.\n");
    }

    return 0;
}