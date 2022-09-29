#include<stdio.h>

int fact(int);

int main(){
    int a,i,sum=0;

    printf("Enter the number: ");
    scanf("%d",&a);

    for (i = 1; i <= a; i++)
    {
        sum=sum+fact(i)/i;
    }
    printf("%d factorial sum is %d",a,sum);

    return 0;
}
int fact(int a){
    
    int i,fact=1;

    for (i = 1; i <= a; i++)
        fact*=i;
    return fact;    
}
    
