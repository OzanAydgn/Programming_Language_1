//Write C Program to Concatenate Two Strings.

#include <stdio.h>
#include <string.h>

int main() {

    char str1[50], str2[50];

    printf("Birinci stringi girin: ");
    scanf("%s", str1);

    printf("İkinci stringi girin: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("Birleştirilmiş string: %s\n", str1);

    return 0;
}