#include<stdio.h>

int main(){
    int i,no=5,fact=1;

    printf("\nFactorial Calculate\n\n");

    for(i=1;i<=no;i++){
       fact = fact*i;        
    }
    printf("%d No is Factorial is %d",no,fact);

    return 0;
}