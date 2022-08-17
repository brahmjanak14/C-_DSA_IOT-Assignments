#include<stdio.h>

int main(){
    int no,i;

    printf("\nEnter N time Odd no: ");
    scanf("%d",&no);

    for (i = no; i >=  1; --i)
    {
        printf("%d ",i * 2 - 1);
    }
    
    return 0;
}