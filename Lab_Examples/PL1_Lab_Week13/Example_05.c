// Write a function that takes the entered sentence as a parameter and finds the number of words in it.

#include <stdio.h>

int strlen(char a[]);

int main(){
    
    char str[80];
    printf("Bir yazı giriniz:");
    gets(str);
    printf("%d",strlen(str));


}
int strlen(char a[]){

    int k=0;
    while (a[k]!='\0')
    {
        k++;
    }
    return k;
    
}