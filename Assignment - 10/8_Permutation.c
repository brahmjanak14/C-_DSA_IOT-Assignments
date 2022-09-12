#include<stdio.h>

long parmutation(long, long);
long fact(long);

int main(){
    int n,r;

    printf("Enter two numbers: ");
    scanf("%d%d",&n,&r);

    printf("Arrangements(Permutation): %ld",parmutation(n,r));


    return 0;
}

long parmutation(long n, long r){
    long p;

    p = fact(n)/fact(n-r);

    return p;
}

long fact(long n){
    int f=1,i;

    for (i = 1; i <= n; i++)
        f*=i;
    
    return f;
}