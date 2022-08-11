#include<stdio.h>
int main(){
    int first,second,temp;

    printf("Enter Two Number: ");
    scanf("%d %d",&first,&second);

    printf("\nfirst=%d, second=%d",first,second);

    temp=first;
    first=second;
    second=temp;
    

    printf("\nAfter the swap \nfirst=%d, second=%d",first,second);
        
    return 0;
}