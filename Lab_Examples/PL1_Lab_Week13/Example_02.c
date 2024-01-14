// Write a program that calculates and returns the average of five numbers sent to the function.

#include <stdio.h>

float fonk(int a[]);

int main(){
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d. number: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("%.2f",fonk(a));
    
}
float fonk(int a[]){
    float average;
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=a[i];
    }
    average= sum/5;
    return average;
}