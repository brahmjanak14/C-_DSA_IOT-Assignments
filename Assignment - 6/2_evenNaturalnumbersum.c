#include<stdio.h>

int main(){
    int i,no,sum=0;

    printf("\nFirst Even Natural number sum\n");

    printf("Enter the number: ");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
       sum =sum + (i*2);        
    }
    printf("%d No is sum is %d",no,sum);

    return 0;
}