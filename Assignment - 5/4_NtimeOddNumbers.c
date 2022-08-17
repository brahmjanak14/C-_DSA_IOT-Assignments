#include<stdio.h>

int main(){
    int no,i;

    printf("\nEnter N time Odd no: ");
    scanf("%d",&no);

    for (i = 1; i <= no; i+=2)
    {
        printf("%d ",i);
    }
    
    return 0;
}