#include<stdio.h>

int factorial(int);

int main(){
    int n;

    printf("Enter the numbers: ");
    scanf("%d",&n);

    printf("Factorial: %d",factorial(n));

    return 0;
}

int factorial(int n){
    int i,fact=1;

    for (i = 1; i <=n; i++)
    {
        fact*=i;
    }
    
    return fact;
}