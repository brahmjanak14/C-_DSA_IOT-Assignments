#include<stdio.h>

int main(){
    int no,i;

    printf("\nEnter N time Natural no: ");
    scanf("%d",&no);

    for (i = no; i >= 0; --i)
    {
        printf("%d ",i);
    }
    
    return 0;
}