#include<stdio.h>

int square(int);

int main(){
    int a;

    printf("Enter the any number: ");
    scanf("%d",&a);

    printf("%d is Square is the %d ",a,square(a));

    return 0;
}

int square(int a){
    return a*a;
}