#include<stdio.h>

int combination(int, int);
int fact(int);
int main(){

    int n,r;

    printf("Enter the two numbers: ");
    scanf("%d%d",&n,&r);

    printf("Combination: %d",combination(n,r));

    return 0;
}

int combination(int n, int r){
    int c;
    c=fact(n)/(fact(n-r)*fact(r));

    return c;
}

int fact(int n){
    int i,f=1;

    for (i = 1; i <= n; i++)
    {
        f*=i;
    }
    
    return f;
}