#include<stdio.h>

int main(){
    int no,i,even;

    printf("\nEnter N time Even no: ");
    scanf("%d",&no);

    for (i = 1; i <=  no; i++)
    {       
        printf("%d ",i*2);
    }
    
    return 0;
}