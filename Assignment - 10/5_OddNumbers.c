#include<stdio.h>

void oddNaturalNumbers(int);

int main(){

    int n;

    printf("Enter the numbers : ");
    scanf("%d",&n);

    oddNaturalNumbers(n);

    return 0;
}

void oddNaturalNumbers(int n){
    int i;

    for (i = 1; i <= n; i++)
        printf("%d ",2*i-1);
    
}