#include<stdio.h>

int main(){
    int no,i;

    printf("\nEnter Squre number: ");
    scanf("%d",&no);

    for (i = 1; i <=  no; i++)
    {      
        printf("%d ",i*i);
    }
    
    return 0;
}