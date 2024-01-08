// Determine and Output Whether Number N is Even or Odd.

#include <stdio.h>

int main() {
    int N;

    printf("Bir Sayi Giriniz: ");
    scanf("%d", &N);

    if (N % 2 == 1) {
        printf("%d Sayisi Tektir.\n", N);
    } else {
        printf("%d Sayisi Cifttir.\n", N);
    }

    return 0;
}