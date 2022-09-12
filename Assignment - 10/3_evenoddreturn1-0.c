#include<stdio.h>
int evenOdd(int);
int main(){
    int n;

    printf("\n##############################\n");
    printf("\nEven number 1 && other wise odd number 0\n");
    
    printf("\nEnter the number: ");
    scanf("%d",&n);

    printf("%d",evenOdd(n));

    return 0;
}

int evenOdd(int n){

    if (n%2==0)
        return 1;
    else
        return 0;
}