#include<stdio.h>
int prime(int);

int main(){
    int n;

    printf("\nPRIME NUMBER OR NOT\n");
    printf("Enter the numbers: ");
    scanf("%d",&n);

    if (prime(n) == n)
        printf("%d is Prime",n);
    else
        printf("%d is Not Prime",n);
    

    return 0;
}

int prime(int n){
    int i;
    for (i = 2; i <= n-1; i++)
        if (n%i==0)
            break;

    return i;
}