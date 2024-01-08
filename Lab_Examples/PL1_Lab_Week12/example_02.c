//Write C Program to Remove all Characters in a String Except Alphabet.

#include <stdio.h>
#include <ctype.h>

void removeNonAlphabetic(char str[]) {

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (isalpha(str[i]))
        {
            str[i] = str[i];
        }
        else
        {
            str[i] = ' ';
        }
    }
}

int main() {

    char inputString[100];

    printf("Bir string girin: ");
    fgets(inputString, sizeof(inputString), stdin);

    removeNonAlphabetic(inputString);

    printf("Alfabetik olmayan karakterleri kaldırılmış string: %s\n", inputString);

    return 0;
}