// Prepare the function that calculates the area of the square and write a program that uses it in main.

#include <stdio.h>

int kareAl(int);

int main(){
    int a,sonuc;
    printf("Karenin uzunlugunu giriniz:");
    scanf("%d",&a);
    printf("%d",kareAl(a));
    return 0;    
}
int kareAl(int a){
    return a*a;
}