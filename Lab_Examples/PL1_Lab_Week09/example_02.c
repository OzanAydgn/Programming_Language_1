//  Write a C program which generates even numbers between 1000 and 2000 and then prints them.

#include <stdio.h>

int main() {
    printf("1000 ile 2000 arasindaki cift sayilar:\n");

    for (int i = 1000; i <= 2000; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}