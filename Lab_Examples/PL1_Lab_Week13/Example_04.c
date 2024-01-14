// Write a program that allows you to check whether an integer is a prime number, an Armstrong number, or both, by creating two separate functions.

#include <stdio.h>
#include <math.h>

int asal(int);

int armstrong(int);

int main(){
    int num;
    printf("Bir sayı giriniz: ");
    scanf("%d", &num);

    if (asal(num) && armstrong(num))
    {
        printf("%d hem asal hem de Armstrong bir sayıdır.\n", num);
    }
    else if (asal(num))
    {
        printf("%d bir asal sayıdır.\n", num);
    }
    else if (armstrong(num))
    {
        printf("%d bir Armstrong sayısıdır.\n", num);
    }
    else
    {
        printf("%d ne asal ne de Armstrong bir sayıdır.\n", num);
    }

    return 0;
}

int asal(int num){
    if (num < 2)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int armstrong(int num){
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
