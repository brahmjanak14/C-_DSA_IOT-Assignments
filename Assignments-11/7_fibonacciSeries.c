#include<stdio.h>

void fib(int);

int main(){
    int x;

    printf("Enter the number: ");
    scanf("%d",&x);

    fib(x);

    return 0;
}

void fib(int x){
    int a=-1,b=1,c=0,i;

    for (i = 1; i <= x; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
}