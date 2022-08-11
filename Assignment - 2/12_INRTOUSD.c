/*
12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
*/

#include<stdio.h>

int main(){
    float inr,usd;

    printf("Enter the amount their convert usd: ");
    scanf("%f",&inr);

    usd = inr/76.23;

    printf("INR Convert to USD Dollar is: %.2f",usd);
}