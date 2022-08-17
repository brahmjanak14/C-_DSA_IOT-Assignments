#include<stdio.h>

int main(){
    int i,no,sum=0;

    printf("Enter the number: ");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        sum = sum + i;        
    }
    printf("%d No is sum is %d",no,sum);

    return 0;
}