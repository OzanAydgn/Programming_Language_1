// Write a C program that prints how many character of “a” included in the each word of a string entered from keyboard.

#include <stdio.h>

int main() {

    char inputString[100];

    printf("Bir string girin: ");
    fgets(inputString, sizeof(inputString), stdin);

    int aCount = 0, wordCount = 1;

    for (int i = 0; inputString[i] != '\0'; ++i) {
        if (inputString[i] == 'a') {
            aCount++;
        } else if (inputString[i] == ' '  inputString[i] == '\t'  inputString[i] == '\n') {
            printf("%d. kelimenin içindeki 'a' karakteri sayısı: %d\n", wordCount, aCount);
            aCount = 0;
            wordCount++;
        }
    }

    printf("%d. kelimenin içindeki 'a' karakteri sayısı: %d\n", wordCount, aCount);

    return 0;
}