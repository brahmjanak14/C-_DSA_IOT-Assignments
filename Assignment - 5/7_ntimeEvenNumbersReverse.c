#include<stdio.h>

int main(){
    int no,i,even;

    printf("\nEnter N time Even no: ");
    scanf("%d",&no);

    for (i = no; i >=  1; i--)
    {      
        printf("%d ",i*2);
    }
    
    return 0;
}