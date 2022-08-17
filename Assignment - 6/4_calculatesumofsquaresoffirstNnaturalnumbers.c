#include<stdio.h>

int main(){
    int i,no,sum=0;

    printf("\nFirst Square Natural number sum\n");

    printf("Enter the number: ");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
       sum = sum + (i*i);        
    }
    printf("%d No is sum is %d",no,sum);

    return 0;
}