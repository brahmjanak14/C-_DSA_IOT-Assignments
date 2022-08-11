#include<stdio.h>
int main(){
    int first,second;

    printf("Enter Two Number: ");
    scanf("%d %d",&first,&second);
    printf("\nfirst= %d, second= %d",first,second);
    
    first = first + second;
    second = first-second;
    first = first-second;

    printf("\nAfter the Swapp\n first= %d, second= %d",first,second);
    
    return 0;
}