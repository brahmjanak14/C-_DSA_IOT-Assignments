#include<stdio.h>
void firstNprime(int);
int main(){
    int a;

    printf("Ente the prime number: ");
    scanf("%d",&a);

    firstNprime(a);
        

    return 0;
}

void firstNprime(int a){
    int i;

    for (i = 1; i <= a; i++)
    {
        printf("%d ",i*2-1);
    }
}