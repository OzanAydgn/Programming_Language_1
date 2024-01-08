// Write a program that takes a 10-element array from the keyboard and writes it in reverse to the screen.

#include <stdio.h>

int main() {

    int dizi[10];

    printf("10 elemanlı diziyi girin:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    printf("Dizinin ters hali:\n");
    for (int i = 9; i >= 0; --i)
   {
        printf("%d ", dizi[i]);
    }

    return 0;
}