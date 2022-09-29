#include<stdio.h>
int nextPrime(int);
int main(){
    int a;

    printf("Ente the prime number: ");
    scanf("%d",&a);

    if(nextPrime(a) == 1)
        printf("%d is Next number is prime",a);
    else
        printf("%d is Next number is Not prime",a);

    return 0;
}

int nextPrime(int a){
    int i,j,flag=0;

    for (i = a; i >= 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i%j==0){
                flag++;
                break;
            }
        }
        
    }

    if(flag == 2)
        return 1;
    else 
        return 0;

}